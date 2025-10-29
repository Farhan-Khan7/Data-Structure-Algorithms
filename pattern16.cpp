#include<iostream>
using namespace std;

int main(){
    int row;
    
    char col;
    // char ch = 'a';

    for(row = 1; row<=5; row++){
        for(col='a'; col<='e'; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}