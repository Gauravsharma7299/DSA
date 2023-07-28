// Find the min element of the array
#include<iostream>
using namespace std;

int findMin(int arr[],int n){
    int minElement=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<minElement){
            minElement=arr[i];
        }
    }
    return minElement;
}
int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
   
    cin>>n;
    int arr[n];
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"minumum element of an array " <<findMin(arr,n);
    return 0;
}