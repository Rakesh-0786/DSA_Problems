#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int n = arr.size();
    int maxSum = INT_MIN; // Initialize to the smallest possible integer

    // Three nested loops to consider every possible subarray
    for (int i = 0; i < n; i++) {            // Start of the subarray
        for (int j = i; j < n; j++) {        // End of the subarray
            int currentSum = 0;

            // Calculate the sum of elements in the subarray [i..j]
            for (int k = i; k <= j; k++) {
                currentSum += arr[k];
            }

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
