#include <bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n) {
    vector<int> ans;
    unordered_map<int, int> mp;
    
    // Count the occurrences of each element
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    
    // Add elements that occur more than n/3 times to the result vector
    for (auto it : mp) {
        if (it.second > n / 3) {
            ans.push_back(it.first);
        }
    }
    
    return ans; // Return the vector containing the results
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Find the elements and store the result in a vector
    vector<int> ans = find(arr, n);
    
    // Print the elements from the result vector
    for (int x : ans) {
        cout << x << " ";
    }
    
    // If no element occurs more than n/3 times, print -1
    if (ans.empty()) {
        cout << -1;
    }
    
    cout << endl;
    
    return 0;
}

