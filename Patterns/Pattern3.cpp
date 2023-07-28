#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size "<<endl;
    cin>>n;
    // Inverted right triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<< " *";
          //  this loop also correct
        //   for(int j=n-i+1;j>=1;j--){
          //  cout<< " *";
        }
        cout<<endl; 

    }
    return 0;

}