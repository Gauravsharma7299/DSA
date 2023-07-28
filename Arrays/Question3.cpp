// Find the sum of all the  element of the array
#include<iostream>
using namespace std;

int SumOfAllElements(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }return sum;
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
    
    cout<<"Sum of all element of an array " <<SumOfAllElements(array,size);
    return 0;
}