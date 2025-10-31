#include<iostream>
using namespace std;

char LowerToUpper(char character){

    char ans = character - 'a' + 'A';
    return ans;
}


int main(){
    char character;
    cout<<"Enter Character = ";
    cin>>character;

    cout<<LowerToUpper(character)<<endl;
}