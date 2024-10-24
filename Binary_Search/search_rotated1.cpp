#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the mid element is the target
        if (arr[mid] == k) {
            return mid;  // Return the index if found
        }

        // Determine if the left half is sorted
        if (arr[low] <= arr[mid]) {
            // Check if the target is in the left half
            if (arr[low] <= k && k < arr[mid]) {
                high = mid - 1;  // Target is in the left half
            } else {
                low = mid + 1;   // Target is in the right half
            }
        } else {  // The right half must be sorted
            // Check if the target is in the right half
            if (arr[mid] < k && k <= arr[high]) {
                low = mid + 1;   // Target is in the right half
            } else {
                high = mid - 1;  // Target is in the left half
            }
        }
    }
    return -1;  // Target not found
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n; // Input the size of the array
    vector<int> arr(n);
    
    cout << "Enter the elements of the rotated sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the elements of the array
    }
    
    cout << "Enter the integer to search for: ";
    cin >> k; // Input the integer to search

    int index = search(arr, n, k);
    
    // Output the result
    if (index != -1) {
        cout << "Element " << k << " found at index: " << index << endl;
    } else {
        cout << "Element " << k << " not found in the array." << endl;
    }

    return 0;
}
