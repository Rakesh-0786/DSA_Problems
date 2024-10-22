#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;

    // Iterate through each starting point
    for (int i = 0; i < n; i++) {
        int sum = 0; // Initialize sum for the current starting point
        // Iterate through each endpoint
        for (int j = i; j < n; j++) {
            sum += nums[j]; // Corrected from `arr[j]` to `nums[j]`
            // Check if the current sum equals k
            if (sum == k) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<int> nums = {1, 1, 1}; // Example input
    int k = 2; // Example target sum
    int result = subarraySum(nums, k);
    cout << "Number of subarrays that sum to " << k << ": " << result << endl; // Output the result
    return 0;
}
