#include<bits/stdc++.h>
using namespace std;

int maxProductSubarray(int arr[], int n) {
    int maxProduct = INT_MIN; // Store the maximum product found

    // Outer loop to select the start of the subarray
    for (int i = 0; i < n; i++) {
        // Middle loop to select the end of the subarray
        for (int j = i; j < n; j++) {
            int product = 1;  // Initialize product for the current subarray
            
            // Inner loop to calculate the product of the subarray from i to j
            for (int k = i; k <= j; k++) {
                product *= arr[k];
            }
            
            // Update the maximum product if the current product is larger
            maxProduct = max(maxProduct, product);
        }
    }

    return maxProduct;
}

int main() {
    int arr[] = {2, -3, 4, -2, -1};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = maxProductSubarray(arr, n);
    cout << "Maximum product of a subarray is: "
}