//  if an Array contain a spacific element or not
#include<iostream>
using namespace std;
bool specificElement(int arr[],int n ,int specEle){
    for(int i=0;i<n;i++){
        if(arr[i]==specEle){
            cout<<"element  found";
            return  true ;
        }
    }cout<<"Elemtn not found";
    return false;
}
int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int specEle;
    cout<<"Search for element"<<endl;
    cin>>specEle;
    cout<<specificElement(arr,n,specEle);
    return 0;
}