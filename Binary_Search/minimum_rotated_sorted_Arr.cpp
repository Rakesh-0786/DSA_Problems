// Given the sorted rotated array nums of unique elements, return the minimum element of this array.
// You must write an algorithm that runs in O(log n) time.
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> arr, int n) {
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[low] <= arr[high]) {  // Sorted subarray case
            ans = min(ans, arr[low]);
            break;
        }
        
        if (arr[low] <= arr[mid]) {   // Left side is sorted
            ans = min(ans, arr[low]);
            low = mid + 1;
        } else {                      // Right side is sorted
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int minimum = findMin(arr, n);
    cout << "The minimum element in the array is: " << minimum << endl;
    
    return 0;
}
