#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter length of Array: ";
    cin >> n;

    int arr[n];

    // 🔹 First, take all inputs
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize after taking input
    int max = arr[0];
    int min = arr[0];

    // Find maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find minimum
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Largest Value in this Array = " << max << endl;
    cout << "Smallest Value in this Array = " << min << endl;

    return 0;
}
