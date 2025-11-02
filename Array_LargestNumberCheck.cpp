#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int arr[] = {10, 9, 8, 1, 12};
    int size = 5;
    int LargestNumber = INT32_MIN;

    for(int i=0; i<size; i++){
        if(LargestNumber < arr[i]){
            LargestNumber = arr[i];
        }
    }

    cout<<"This is LargestNumber In this Array = "<<LargestNumber<<endl;
}