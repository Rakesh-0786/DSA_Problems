#include <bits/stdc++.h>
using namespace std;

// Function to reverse the array using recursion
void findReverse(int arr[], int l, int r) {
    if (l >= r) {
        return;  // Base case: when left pointer crosses right pointer
    }
    swap(arr[l], arr[r]);  // Swap the elements at l and r
    findReverse(arr, l + 1, r - 1);  // Recursive call to reverse the next elements
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;  // Read the size of the array

    int arr[n];  // Declare array with size n

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Take input for each element of the array
    }

    // Call the recursive function to reverse the array
    findReverse(arr, 0, n - 1);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
