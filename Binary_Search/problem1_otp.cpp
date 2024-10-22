#include<bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of x using binary search
int f(vector<int>& arr, int x) {
    int n = arr.size();
    int ans = -1;  // To store the first occurrence
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ans = mid;    // Update the answer with the current mid index
            high = mid - 1;  // Continue searching in the left half for the first occurrence
        }
        else if (arr[mid] < x) {
            low = mid + 1;  // Search in the right half
        }
        else {
            high = mid - 1;  // Search in the left half
        }
    }
    return ans;  // Return the index of the first occurrence or -1 if not found
}

int main() {
    vector<int> arr = {2, 5, 5, 5, 5,6, 6, 8, 9, 9, 9};  // Initialize the vector
    int x = 9;  // The element to find

    // Call the function to find the first occurrence of x
    int ans = f(arr, x);
    cout << ans << endl;  // Output the result

    return 0;
}
