// find number of occurence of an element in array
#include<iostream>
using namespace std;
int numOfOcc(int arr[],int n,int number){
    int count=0;
    for(int i=0;i<n;i++){
     if(arr[i]==number){
        count++;
        
        
     }
    }return count;
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
    int number;
    cout<<"Enterh the number"<<endl;
    cin>>number;
    cout<<numOfOcc(arr,n,number);
    return 0;
}