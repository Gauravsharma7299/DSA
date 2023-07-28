#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
      for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        
        }
        for(int j=1;j<=i;j++)
{
        cout<<" *";
    
}      
cout<<endl;
}
// ye pattern me if else condition se bhi ho sakta tha

// for(int i=1;i<=n;i++){
//     if(int j=n-i){
//         cout<<" ";
        
//     }else {

//         cout<<"*";
//     }
// }

    return 0;
}