#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            cout<<( arr[i])<<endl;
        }
    }
    return -1;
}


int main(){
    int arr[] = {8,2,6,9,1,3,3,7,4,0};
    int size = 10;
    int target = 0;
    linearSearch(arr , size , target);


};
