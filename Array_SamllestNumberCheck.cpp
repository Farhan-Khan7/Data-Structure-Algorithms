#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int arr[] = {10, 9, 8, 1, 2};
    int size = 5;
    int smallestNumber = INT32_MAX;

    for(int i=0; i<size; i++){
        if(smallestNumber > arr[i]){
            smallestNumber = arr[i];
        }
    }

    cout<<"This is smallestNumber In this Array = "<<smallestNumber<<endl;
}