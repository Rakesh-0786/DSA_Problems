#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int arr3[m+n]; // Temporary array to store the merged elements
    int left = 0, right = 0, index = 0;

    // Merging the two arrays
    while(left < m && right < n) {
        if(nums1[left] <= nums2[right]) {
            arr3[index++] = nums1[left++];
        } else {
            arr3[index++] = nums2[right++];
        }
    }

    // Copy remaining elements of nums1 (if any)
    while(left < m) {
        arr3[index++] = nums1[left++];
    }

    // Copy remaining elements of nums2 (if any)
    while(right < n) {
        arr3[index++] = nums2[right++];
    }

    // Copy the merged result back into nums1
    for(int i = 0; i < m + n; i++) {
        nums1[i] = arr3[i];
    }
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // Example input, nums1 has extra space for nums2
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    merge(nums1, m, nums2, n);

    // Output the result
    for (int num : nums1) {
        cout << num << " ";
    }

    return 0;
}
