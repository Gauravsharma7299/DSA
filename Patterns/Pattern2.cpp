#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter row"<<endl;
    cin>>row;
    cout<<"Enter col"<<endl;
    cin>>col;
    //Right triangle

    //note krne bali baat 
    //isme col nhi denge toh bhi chalega kyoki  col kahi use nhi ho rha
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<" *";

        }
        cout<<endl;
    }
    return 0;
}