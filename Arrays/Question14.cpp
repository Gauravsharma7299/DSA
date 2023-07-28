// Find the missing number of consecutive sequence
#include<iostream>
using namespace std;
int main(){
    int n=6;
    int missingnumber;
    int arr[n]={1,2,3,4,5,7};
    int smofcons=n*(n+1)/2;

    int sumofactural=0;
    for(int i=0;i<n-1;i++){
        sumofactural=sumofactural+arr[i];
        

    }
    missingnumber=smofcons-sumofactural;
    cout<<missingnumber;
 

    return 0;
}