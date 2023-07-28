// Remove duplicate elements from an aray

#include<iostream>
using namespace std;
void removeDuplicates(int arr[], int& size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
}
int main(){
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    int arr[size];
    cout<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    removeDuplicates(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}