// Find the max element of the array
#include<iostream>
using namespace std;

int findMax(int arr[],int n){
    int maxElement=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
    }
    return maxElement;
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
    
    cout<<"max element of an array " <<findMax(arr,n);
    return 0;
}