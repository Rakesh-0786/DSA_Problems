#include <bits/stdc++.h> 
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    // Write your code here.
    vector<int> ans;
    vector<int> vis(m, 0); // Using vector instead of array for visibility tracking

    // Iterate through each element of arr1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Check if elements match and if arr2[j] has not been used
            if (arr1[i] == arr2[j] && vis[j] == 0) {
                ans.push_back(arr1[i]);
                vis[j] = 1; // Mark arr2[j] as used
                break; // Move to the next element in arr1
            }
            // Check if arr2[j] is greater than arr1[i] (array is sorted)
            if (arr2[j] > arr1[i]) {
                break; // No need to check further in arr2
            }
        }
    }
    return ans; // Return the intersection
}

int main() {
    // Example usage
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 5, 6};

    vector<int> result = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
