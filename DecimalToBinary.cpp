#include <iostream>
using namespace std;

int decToBinary(int num){
    int rem , pow = 1 ,ans = 0;

    while(num > 0){
        rem = num % 2;
        num /= 2;
        ans += (rem*pow);
        pow *= 10;
    }

    return ans;
}

int main(){
    int num;
    cout<<"Which Number convert Decimal to Binary = ";
    cin>>num;
    decToBinary(num);

    // int num = 4;
    cout<<decToBinary(num)<<endl;
    
}