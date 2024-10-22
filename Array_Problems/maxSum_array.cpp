#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Map to store the prefix sum and its index
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
        
        // If the sum is equal to k, we found a subarray from index 0 to i
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        
        // Check if (sum - k) exists in the map
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        
        // Store the first occurrence of sum
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    
    return maxLen;
}
int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    long long k = 12;
    cout << "Longest Subarray Length with Sum " << k << " is: " 
         << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
