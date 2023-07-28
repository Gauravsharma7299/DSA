// check array is in Ascending or Decending order

#include<iostream>
using namespace std;
bool checkAscending(int arr[],int size){
    int ascending=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<ascending){
            return false;
        }
       
    } return true;
}
int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Array is in Ascending or decending "<<checkAscending(array,size);


    return 0;
}