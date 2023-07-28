// Reverse the array
#include<iostream>
using namespace std;

void ReverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
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
    ReverseArray(array,size);
    cout<<"Reversed array "<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<< " ";
    }
   
    
    
    
    return 0;
}