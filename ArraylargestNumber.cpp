#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter length of Array ";
    cin>>n;

    int arr[n];
    int max = arr[0];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Largest Value in this Array = "<<max<<endl;
}