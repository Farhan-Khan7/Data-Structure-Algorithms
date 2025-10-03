#include <iostream>
#include <sstream>
using namespace std;

int main(){

    string number;
    cout<<"Enter the numbers : ";
    getline(cin , number);

    stringstream num(number);
    int n;

    int digitsCount = 0;
    for(char ch : number){
        if(isdigit(ch)){
            digitsCount++;
        }
    }
    cout<<"Total Digits : "<<digitsCount<<endl;

    return 0;

}