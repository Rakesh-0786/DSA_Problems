#include<bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of the target
int findFirst(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;       // Update ans to current mid
            high = mid - 1;  // Move left to find earlier occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Function to find the last occurrence of the target
int findLast(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;      // Update ans to current mid
            low = mid + 1;  // Move right to find later occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Function to find both first and last occurrences of the target
pair<int, int> findFirstandLast(vector<int>& nums, int target) {
    int first = findFirst(nums, target);
    int last = findLast(nums, target);
    return {first, last};
}

int main() {
    vector<int> nums = {2, 5, 5, 5, 5, 6, 6, 8, 9, 9, 9};  // Initialize the vector
    int target = 9;  // The target to search for

    pair<int, int> ans = findFirstandLast(nums, target);
    cout << "First Occurrence: " << ans.first << ", Last Occurrence: " << ans.second << endl;

    return 0;
}
