#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[], int n) {
    int j = -1;  // Index to store the first zero found

    // Find the first zero in the array
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    // If no zero was found, return
    if(j == -1) {
        return;
    }

    // Move all non-zero elements after the first zero
    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;  // Move j to the next zero position
        }
    }
}

int main() {
    int n;
    cin >> n;  // Input size of array
    int arr[n];  // Declare array of size n

    // Input array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZero(arr, n);  // Call the moveZero function

    // Output the modified array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
