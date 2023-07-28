// Find the average of all the  element of the array
#include<iostream>
using namespace std;

double findAverage(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return static_cast<double>(sum)/size;
}

int main(){
    int size;
    cout<<"Enter the size of an array"<<endl;
   
    cin>>size;
    int array[size];
    cout<<"enter array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Average of all elements " <<findAverage(array,size);
    
    
    return 0;
}