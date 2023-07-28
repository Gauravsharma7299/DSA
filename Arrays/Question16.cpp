//  max diffrenece in the elements of an array
#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n]={3,1,7,5,9,8,4};
    int maxdiff=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j] && arr[j]-arr[i]>maxdiff){
                maxdiff=arr[j]-arr[i];
            }
        }
    }
    cout<<maxdiff;
    return 0;
}