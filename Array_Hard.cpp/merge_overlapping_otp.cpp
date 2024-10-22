#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverLappingIntervals(vector<vector<int>>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end()); // Sort intervals based on start time
    
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        // If ans is empty or current interval doesn't overlap, add it to the result
        if (ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        } else {
            // If intervals overlap, merge them by updating the end time
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    
    // Return the merged intervals after the loop finishes
    return ans;
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> merged = mergeOverLappingIntervals(intervals);

    // Display merged intervals
    for (auto& interval : merged) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    return 0;
}
