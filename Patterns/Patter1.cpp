
//sabse easy pattern of the pattern series
#include<iostream>
using namespace std;
int main(){
    int row ,col;
    cout<<"Enter the row"<<endl;
    cin>>row ;
    cout<<"enter the col"<<endl;
    cin>>col;
    // Simple square print krna hai
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<" *";
        }
        cout<<endl;
    }

return 0;
}