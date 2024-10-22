#include<bits/stdc++.h>
using namespace std;

void rightRotate(vector<int>& arr, int n) {
    int temp = arr[n-1];  // Store the last element
    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];  // Shift elements to the right
    }
    arr[0] = temp;  // Place the last element at the beginning
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    rightRotate(arr, n);

    // Output the rotated array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
