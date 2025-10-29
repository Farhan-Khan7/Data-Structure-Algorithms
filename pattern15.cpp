#include<iostream>
using namespace std;

int main(){
    int row , col;
    char ch = 'a';

    for(row = 1; row<=5; row++){
        for(col=1; col<=5; col++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}