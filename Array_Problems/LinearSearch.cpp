#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            return i;  // Return the index if the element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int n;
    cin >> n;  // Input size of array
    int arr[n];  // Declare array of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;  // Input the element to search for

    // Call LinearSearch function and store the result
    int result = LinearSearch(arr, n, k);

    // Output the result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
