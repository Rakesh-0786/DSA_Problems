#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        
    
        sort(nums.begin(), nums.end()); // Sort the array

        for (int i = 0; i < n; i++) { // Iterate up to n - 2
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue; // Skip duplicates for i
            }
            int j = i + 1; // Second pointer
            int k = n - 1; // Third pointer
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++; // Move left pointer to the right
                } else if (sum > 0) {
                    k--; // Move right pointer to the left
                } else {
                    // Found a triplet
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;

                    // Skip duplicates for j
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                    // Skip duplicates for k
                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            }
        }
        return ans; // Return the result
    }
};

