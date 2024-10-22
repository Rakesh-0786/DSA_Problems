#include <bits/stdc++.h>
using namespace std;

int majorityEle(int arr[], int n) {
    unordered_map<int, int> mpp;

    // Count the occurrences of each element
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // Find the element that occurs more than n/2 times
    for (auto it : mpp) {
        if (it.second > n / 2) {
            return it.first;
        }
    }

    return -1;  // No majority element found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = majorityEle(arr, n);
    
cout<<result;
    return 0;
}
