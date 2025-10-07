#include <iostream>
using namespace std;

int main(){
    int user;
    cout<<"Enter Number = ";
    cin>>user;

    for(int i=user; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}