
// es pattern me abhi confusion hai check krna hai later
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            if(i==n|| j==1 ||j==(2*i-1)){
                cout<<" *";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}