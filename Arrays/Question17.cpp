// Rearrange positive and negative numbers in an array.
#include<iostream>
using namespace std;
void RearrangPosNeg(int arr[],int size1){
    int l=0;
    int right =size1-1;
    while(l<=right){
        if(l<0 & right<0){
            l++;
            right--;
        }else if(l>0 &right>0 | l<0 & right>0){
            l++;
            right--;
        }else if(l>0 &right<0){
            swap(arr[l],arr[right]);

        }
    }
   
}
int main(){
    int size1=7;
    int arr[size1]={4,6,-1,2,-8,-5 ,3};
    RearrangPosNeg(arr,size1);
    for(int i=0;i<size1;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}