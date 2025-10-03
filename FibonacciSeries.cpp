#include <iostream>
using namespace std;

int main(){

    int length;
    cout<<"kaha tak ki fibonacci Series Chahiye : ";
    cin>>length;
    int firstValue , SecondValue , ValueSum;

    firstValue = 0;
    SecondValue = 1;
    
    cout<<"Fibonacci Series of "<<length<<endl;
    for(int i=1; i<=length; i++){
        cout<<firstValue<<" ";
        ValueSum = firstValue + SecondValue;
        firstValue = SecondValue;
        SecondValue = ValueSum;
    }
}