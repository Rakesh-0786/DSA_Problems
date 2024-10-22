#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[], int n) {
    vector<int> temp; // Create a temporary vector to store non-zero elements

    // Step 1: Store all the non-zero elements in the temp
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    // Step 2: Shift all the non-zero elements to the beginning of the array
    for(int i = 0; i < temp.size(); i++) {
        arr[i] = temp[i];
    }

    // Step 3: Move all the zeros to the end of the array
    for(int i = temp.size(); i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int n;
    cin >> n; // Input size of array
    int arr[n]; // Declare array of size n

    // Input array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZero(arr, n); // Call the moveZero function

    // Output the modified array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
