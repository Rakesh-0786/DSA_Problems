#include<bits/stdc++.h>
using namespace std;

// Recursive binary search function
int binarySearch(vector<int>& arr, int target, int low, int high) {
    if (low > high) {
        return -1; // Target not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid; // Target found
    }
    if (arr[mid] < target) {
        // Search in the right half
        return binarySearch(arr, target, mid + 1, high);
    } else {
        // Search in the left half
        return binarySearch(arr, target, low, mid - 1);
    }
}

int main() {
    // Initialize vector with sorted elements
    vector<int> arr = {2, 4, 5, 7, 15, 24, 45, 50};
    int target = 15;

    // Call the binarySearch function and store the result
    int result = binarySearch(arr, target, 0, arr.size() - 1);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
