#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted subarrays of array `a`
void merge(int a[], int low, int mid, int high) {
    vector<int> temp; // Temporary vector to store the merged subarray
    int i = low, j = mid + 1; // Pointers to traverse the left and right halves

    // Merge elements from both halves into `temp` in sorted order
    while (i <= mid && j <= high) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i]);
            i++;
        } else {
            temp.push_back(a[j]);
            j++;
        }
    }

    // Copy remaining elements from the left half, if any
    while (i <= mid) {
        temp.push_back(a[i]);
        i++;
    }

    // Copy remaining elements from the right half, if any
    while (j <= high) {
        temp.push_back(a[j]);
        j++;
    }

    // Copy the sorted elements back into the original array `a`
    for (int k = low; k <= high; k++) {
        a[k] = temp[k - low];
    }
}

// Recursive function to implement merge sort
void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2; // Find the middle point

        // Recursively sort the two halves
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        // Merge the sorted halves
        merge(a, low, mid, high);
    }
}

int main() {
    int a[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Given array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
