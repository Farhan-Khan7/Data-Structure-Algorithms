#include<iostream>
using namespace std;

int productSum(int arr[] , int size){
    int sum = 0;
    int product = 1;

    for(int i=0; i<size; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout<<"Sum of An Array : "<<sum<<endl;
    cout<<"Product of An Array : "<<product<<endl;
}

int main(){

    int arr[] = {1,2,3,4,5};
    int size = 5;

    productSum(arr , size);

}