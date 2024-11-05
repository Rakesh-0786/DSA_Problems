#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int>& arr) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int index = -1;
    int ans = INT_MAX;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If the subarray is already sorted, the minimum element is at 'low'
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }

        // Check if the left side is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        } else {
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }
    return index;
}

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    int rotationCount = findKRotation(arr);
    cout << "The minimum value of 'r' (rotation count) is: " << rotationCount << endl;
    return 0;
}
