#include <bits/stdc++.h>
using namespace std;

int find2Sum(vector<int> arr, int n, int target) {
    int i = 0;
    int j = n - 1;
    sort(arr.begin(), arr.end()); // Sort the array

    while (i < j) {
        if (arr[i] + arr[j] == target) {
            cout << "Indices: " << i << ", " << j << endl; // Output the indices
            return 1; // Return 1 to indicate a pair was found
        } else if (arr[i] + arr[j] < target) {
            i++; // Move left pointer to increase the sum
        } else {
            j--; // Move right pointer to decrease the sum
        }
    }
    return -1; // Return -1 to indicate no pair was found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n; // Input the size of the array

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the elements of the array
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target; // Input the target sum

    int result = find2Sum(arr, n, target); // Call the find2Sum function

    // Output the result
    if (result == -1) {
        cout << "No such pair found." << endl;
    }

    return 0; // Indicate successful execution
}
