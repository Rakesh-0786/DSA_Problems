#include <bits/stdc++.h>
using namespace std;

void sel(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int mini = i; // Assume current index is the minimum
        for (int j = i + 1; j < n; j++) { // Find the minimum in the unsorted part
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        // Swap the minimum element with the first element of the unsorted part
        swap(arr[mini], arr[i]);
    }
}

int main() {
    int n;
    cin >> n;  // Input the size of the array
    
    int arr[n];  // Declare the array with size 'n'
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input elements of the array
    }
    
    sel(arr, n);  // Call the selection sort function
    
    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
