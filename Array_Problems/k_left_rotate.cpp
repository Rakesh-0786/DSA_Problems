#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    d = d % n;  // In case d > n
    int temp[d];

    // Store the first d elements in a temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the rest of the elements to the left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Move the stored elements back to the array
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    leftRotate(arr, n, d);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
