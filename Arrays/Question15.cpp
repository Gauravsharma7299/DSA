// Merge two sorted arrays into a single sorted array 
#include<iostream>
using namespace std;
void MergeTwoSortedArray(int arr1[],int size1, int arr2[] , int size2,  int result[]){
    int i,j,k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[i]){
            result[k++]=arr1[i++];
           
        }else{
            result[k++]=arr2[j++];
        }
    }
    while(i<size1){
        result[k++]=arr1[i++];
    }
    while(j<size2){
        result[k++]=arr2[j++];
    }
}
int main(){
    int size1;
    int size2;
    int size3=size1+size2;
     
      
    cout<<"Enter size of array1"<<endl;
    cin>>size1;
   int arr1[size1];
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of array 2" <<endl;
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<size1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<size2;i++){
        cout<<arr2[i]<<" ";
    }
    int result[size3];
     MergeTwoSortedArray(arr1,size1,arr2,size2,result);
     for(int i=0;i<size3;i++){
        cout<<result[i]<<" ";
     }
    return 0;
}