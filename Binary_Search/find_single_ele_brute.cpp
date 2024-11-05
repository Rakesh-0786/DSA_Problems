#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
        return nums[0];
    }

    for (int i = 0; i < n; i++) {
        // Check first element
        if (i == 0) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        } 
        // Check last element
        else if (i == n - 1) {
            if (nums[i] != nums[i - 1]) {
                return nums[i];
            }
        } 
        // Check middle elements
        else {
            if (nums[i] != nums[i + 1] && nums[i] != nums[i - 1]) {
                return nums[i];
            }
        }
    }
    
    return -1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};
    cout << singleNonDuplicate(nums) << endl;
    return 0;
}
