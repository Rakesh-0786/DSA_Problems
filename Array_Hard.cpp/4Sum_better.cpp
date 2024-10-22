#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                set<long long> hashset;
                for (int k = j + 1; k < n; k++) {
                    long long sum = nums[i] + nums[j] + nums[k];
                    long long fourth = target - sum;
                    if (hashset.find(fourth) != hashset.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }
        
        // Converting set to a vector and returning
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

int main() {
    // Test case
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    
    // Solution object
    Solution solution;
    vector<vector<int>> result = solution.fourSum(nums, target);
    
    // Output the results
    for (const auto& quad : result) {
        for (int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
