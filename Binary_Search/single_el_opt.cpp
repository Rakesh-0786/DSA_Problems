#include <bits/stdc++.h>
using namespace std;

int findSingleEl(vector<int> arr) {
    int n = arr.size();
    
    // Edge cases: if the array has only one element or the single element is at the boundaries
    if (n == 1) {
        return arr[0];
    }
    if (arr[0] != arr[1]) {
        return arr[0];
    }
    if (arr[n - 1] != arr[n - 2]) {
        return arr[n - 1];
    }

    int low = 1;
    int high = n - 2;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the middle element is the unique one
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }
        
        // Decide the search direction based on the even-odd index pattern
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) || 
            (mid % 2 == 1 && arr[mid] == arr[mid - 1])) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1; // This return only triggers if no unique element is found (shouldn't happen given problem constraints)
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4};
    int ans = findSingleEl(arr);
    cout << ans;
    return 0;
}
