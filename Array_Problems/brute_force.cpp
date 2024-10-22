#include<bits/stdc++.h>
using namespace std;

int findLargestNumber(vector<int>& arr) {
    // Sort the array
    sort(arr.begin(), arr.end());
    // Return the last element (largest element after sorting)
    return arr [arr.size()- 1];
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Input the array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and output the largest number
    int result = findLargestNumber(arr);
    cout << "Largest number is: " << result << endl;

    return 0;
}
