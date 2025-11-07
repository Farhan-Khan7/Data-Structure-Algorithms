#include <iostream>
#include <vector>
using namespace std;

int majorElement(vector<int> arr , int size){
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        // agar element half se zyada baar aaya
        if(count > size / 2){
            return arr[i];
        }
    }
    return -1; // agar koi majority element nahi mila
}

int main(){
    vector<int> arr = {3, 2, 3};
    int n = arr.size();

    cout << "Majority Element: " << majorElement(arr , n);
}
