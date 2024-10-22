#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int n = arr.size();
    int maxSum = INT_MIN; // Initialize to the smallest possible integer

    // Outer loop to consider starting index of the subarray
    for (int i = 0; i < n; i++) {
        int currentSum = 0; // Initialize sum for the current starting index
        
        // Inner loop to calculate the sum for subarrays starting at i
        for (int j = i; j < n; j++) {
            currentSum += arr[j]; // Add the current element to the current sum
            
            // Update maxSum if we found a new maximum
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxSubarraySum(arr);
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
