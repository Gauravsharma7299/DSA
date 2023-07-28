// Rotate an array by a position

#include<iostream>
using namespace std;


int main(){
    int n;
    int arr[n]={1,2,3,4,5,6,7,8,9,44};
    int temp[n];
    int k=2;
    for(int i=0;i<n;i++){
       temp[(i+k)%n]=arr[i];
    }
   temp[n]=arr[n];
   cout<<temp[n];
    // int size;
    // cout<<"Enter the size of an array"<<endl;
    // cin>>size;
    // int arr[size];
    // cout<<endl;
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }
    
    // for(int i=0;i<size;i++){
    //     cout<<arr[i];
    // }
    return 0;
}