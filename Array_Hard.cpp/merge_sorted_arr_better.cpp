#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr1, vector<int>& arr2, int n, int m) {
    int left = n - 1;  // Start from the last element of arr1
    int right = 0;     // Start from the first element of arr2
    
    // Compare the largest in arr1 with the smallest in arr2
    while(left >= 0 && right < m) {
        if(arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        } else {
            break;  // Stop if no swap is needed
        }
    }

    // Sort both arrays after swapping
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // Example input, nums1 has extra space for nums2
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    merge(nums1, nums2, m, n);

    // Output the result
    cout << "nums1: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    
    cout << "\nnums2: ";
    for (int num : nums2) {
        cout << num << " ";
    }

    return 0;
}
