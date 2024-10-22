#include<bits/stdc++.h>
using namespace std;

// Function to find the smallest number
int findSmallest(vector<int>& arr, int n) {
    int smallest = arr[0];  // Assume the first element is the smallest

    // Loop through the array to find the smallest number
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];  // Update smallest if a smaller element is found
        }
    }

    return smallest;
}

int main() {
    int n;
    cin >> n;  // Input the size of the array
    vector<int> arr(n);

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and output the smallest number
    int ans = findSmallest(arr, n);
    cout << "Smallest number is: " << ans << endl;

    return 0;
}
