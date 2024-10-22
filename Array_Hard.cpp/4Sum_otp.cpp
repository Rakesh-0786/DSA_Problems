#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());  // Sort the input array
        int n = nums.size();
        vector<vector<int>> ans;

        // Traverse through the array for the first two elements
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {  // Avoid duplicates for the first element
                continue;
            }
            for (int j = i + 1; j < n; j++) {
                if (j != i + 1 && nums[j] == nums[j - 1]) {  // Avoid duplicates for the second element
                    continue;
                }
                int k = j + 1;
                int l = n - 1;

                // Use two-pointer approach to find the remaining two elements
                while (k < l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;

                        // Skip duplicates for the third element
                        while (k < l && nums[k] == nums[k - 1]) {
                            k++;
                        }
                        // Skip duplicates for the fourth element
                        while (k < l && nums[l] == nums[l + 1]) {
                            l--;
                        }
                    } else if (sum < target) {
                        k++;  // Move the left pointer to increase the sum
                    } else {
                        l--;  // Move the right pointer to decrease the sum
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    // Test case
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    // Create a Solution object
    Solution solution;

    // Get the result
    vector<vector<int>> result = solution.fourSum(nums, target);

    // Output the result
    for (const auto& quad : result) {
        for (int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
