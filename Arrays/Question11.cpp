// nth smallest element in an array

#include<iostream>
using namespace std;
int nthSmallest(int arr[],int n ,int nth){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]==arr[j];
                arr[j]==temp;
            }
        }if(i==n-nth)
            cout<<arr[i];
        
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nth;
    cout<<"Enter nth number"<<endl;
    cin>>nth;
    cout<<nthSmallest(arr,n,nth);
    return 0;
}