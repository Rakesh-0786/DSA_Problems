#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int>& arr, int n) {
    unordered_map<int, int> mpp; // Map to store cumulative sum and its index
    int sum = 0; // Cumulative sum
    int maxi = 0; // Maximum length of subarray with sum = 0

    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Update cumulative sum
        
        // Check if cumulative sum is zero
        if (sum == 0) {
            maxi = i + 1; // Update maxi if from start to current index has zero sum
        } else {
            // Check if the cumulative sum has been seen before
            if (mpp.find(sum) != mpp.end()) {
                // Update maxi with the length of the zero-sum subarray
                maxi = max(maxi, i - mpp[sum]);
            } else {
                // Store the index of the first occurrence of the cumulative sum
                mpp[sum] = i;
            }
        }
    }
    return maxi; // Return the maximum length found
}

int main() {
    int t; // Number of test cases
    cin >> t; // Read number of test cases
    while (t--) {
        int n; // Size of the array
        cin >> n; // Read size of the array
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Read array elements
        }
        cout << maxLen(arr, n) << endl; // Print the result
    }
    return 0; // Exit
}
