#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;


// Function to check prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Enter numbers separated by spaces: ";
    
    string line;           // <string> box me poori line store hogi
    getline(cin, line);    // user input ek line me
    
    stringstream ss(line); // <sstream> tool, line ko ek-ek number me tod dega
    int n;


    while (ss >> n) {      // ek-ek number nikal ke n me store karo
        if (isPrime(n)) {
            cout << n << " is Prime" << endl;
        } else {
            cout << n << " is Not Prime" << endl;
        }
 
        
    }
    return 0;

}