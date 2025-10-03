#include <iostream>
#include <sstream>
using namespace std;

int main(){

    // Approach 1

    string number;
    cout<<"Enter the numbers : ";
    getline(cin , number);
    
    int digitsCount = 0;
    stringstream num(number);
    int n;

    for(char ch : number){
        if(isdigit(ch)){
            digitsCount++;
        }
    }
    //  Approach 2
    int numb;
    cout<<"Enter Your Number = ";
    cin>>numb;

    while (numb != 0){
        numb = numb/10;
        digitsCount++;
    }

    // cout << "Total Digits : " << digitsCount << endl;

    return 0;
}