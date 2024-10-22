#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int low = 0; // start of the search space
    int high = arr.size() - 1;  // end of the search space

    // Use a while loop for binary search
    while (low <= high) {
        // calculate mid for the search space
        // int mid = (low + high) / 2;
        int mid= low+(high-low)/2;
        
        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            // discard the left half of the mid
            low = mid + 1;
        } else {
            // discard the right half of mid
            high = mid - 1;
        }
    }
    return -1; // Target not found
}

int main() {
    // Initialize vector with elements
    vector<int> arr = {2, 4, 5, 7, 15, 24, 45, 50};
    int target = 15;

    // Call binarySearch function and print the result
    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
