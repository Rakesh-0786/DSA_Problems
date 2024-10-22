#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int>& arr, int n) {
    long long sum = 0, maxi = LONG_MIN;
    int start = 0, end = 0, s = 0; // To track indices

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // Check if we found a new maximum
        if (sum > maxi) {
            maxi = sum;
            start = s; // Update starting index
            end = i;   // Update ending index
        }

        // If sum becomes negative, reset it
        if (sum < 0) {
            sum = 0;
            s = i + 1; // Set the starting index to the next element
        }
    }

    // If all elements are negative, set maxi to 0 and clear the indices
    if (maxi < 0) {
        maxi = 0;
        start = end = -1; // Indicate no valid subarray
    }

    // Print the maximum subarray elements
    if (start != -1) { // If valid subarray exists
        cout << "Maximum subarray is: ";
        for (int i = start; i <= end; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return maxi; // Return the maximum subarray sum
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n; // Read the size of the array

    vector<int> arr(n); // Declare an array of size n
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read each element of the array
    }

    long long result = maxSubarraySum(arr, n); // Call the function to find the maximum subarray sum
    cout << "The maximum subarray sum is: " << result << endl; // Output the result

    return 0;
}
