#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j;
    for(int i=1; i<=n; i++){

        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;

    }

    for(int i=n; i>=1; i--){

        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;

    }
}