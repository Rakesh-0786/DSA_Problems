#include<bits/stdc++.h>
using namespace std;

int subarrayWithMaxProduct(vector<int> &arr) {
    int pre = 1, suff = 1; // Initialize pre and suff to 1 for correct multiplication
    int ans = INT_MIN;     // Initialize answer with the smallest possible value
    int n = arr.size();

    // Loop through the array
    for (int i = 0; i < n; i++) {
        // Reset prefix or suffix product to 1 if it becomes 0
        if (pre == 0) pre = 1;
        if (suff == 0) suff = 1;

        // Calculate prefix product (left to right)
        pre = pre * arr[i];

        // Calculate suffix product (right to left)
        suff = suff * arr[n - i - 1];

        // Update the maximum product found
        ans = max(ans, max(pre, suff));
    }

    return ans;
}

int main() {
    vector<int> arr = {2, -3, 4, -2, -1}; // Example array
    cout << "Maximum product of a subarray is: " << subarrayWithMaxProduct(arr) << endl;
    return 0;
}
