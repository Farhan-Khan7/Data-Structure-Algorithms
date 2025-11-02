#include<iostream>
#include <cmath>
using namespace std;

// For Digit Count Function 

int digCount(int value){
    
    int count = 0;
    while(value){
        value /= 10;
        count++;
    }
    return count;
}
// This function Check Armstrong Number 

bool ArmstrongNumber(int value , int digit){
    int num = value;
    int Arm = 0;
    while(value){
        int rem = value % 10;
        value /= 10;
        Arm = Arm + round(pow(rem , digit));
    }

    if(Arm == num){
        cout<<"This is Armstrong number"<<endl;
        return true;
    }else{
        cout<<"This is Not Armstrong number "<<endl;
        return false;
    }

}



int main(){

    int value;
    cout<<"Enter the value = ";
    cin>>value;

    int digit = digCount(value);
    ArmstrongNumber(value , digit);

}