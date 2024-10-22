#include <bits/stdc++.h>
using namespace std;

int findSub(int arr[], int n) {
    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];       // Add the current element to the sum
        maxi = max(sum, maxi); // Update maxi if sum is greater

        if (sum < 0) {      // If sum becomes negative, reset it to 0
            sum = 0;
        }
    }
    
    return maxi; // Return the maximum subarray sum found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n; // Read the size of the array

    int arr[n]; // Declare an array of size n
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read each element of the array
    }

    int result = findSub(arr, n); // Call the function to find the maximum subarray sum
    cout << "The maximum subarray sum is: " << result << endl; // Output the result

    return 0;
}
