#include <bits/stdc++.h>
using namespace std;

// Function to reverse the array using recursion
void f(int i, int arr[], int n) {
    if (i >= n / 2) {  // Base case: when index crosses the middle of the array
        return;
    }
    swap(arr[i], arr[n - i - 1]);  // Swap elements at i and (n - i - 1)
    f(i + 1, arr, n);  // Recursive call to process the next elements
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare an array of size n

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {  // Input loop should run till n (not n+1)
        cin >> arr[i];
    }

    // Call the recursive function to reverse the array
    f(0, arr, n);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
