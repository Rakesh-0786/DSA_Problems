#include <bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int>& A, int key) {
    int n = A.size();
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the key is found
        if (A[mid] == key) {
            return true;
        }

        // Handle duplicates
        if (A[low] == A[mid] && A[mid] == A[high]) {
            low++;
            high--;
            continue;
        }

        // Check if left half is sorted
        if (A[low] <= A[mid]) {
            // Key is in the left half
            if (A[low] <= key && key <= A[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } 
        // Right half is sorted
        else {
            // Key is in the right half
            if (A[mid] <= key && key <= A[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return false;
}

int main() {
    vector<int> A1 = {4, 5, 6, 7, 0, 1, 2};
    int key1 = 0;

    vector<int> A2 = {4, 5, 6, 7, 0, 1, 2};
    int key2 = 3;

    vector<int> A3 = {1, 0, 1, 1, 1};
    int key3 = 0;

    cout << (searchInARotatedSortedArrayII(A1, key1) ? "True" : "False") << endl; // True
    cout << (searchInARotatedSortedArrayII(A2, key2) ? "True" : "False") << endl; // False
    cout << (searchInARotatedSortedArrayII(A3, key3) ? "True" : "False") << endl; // True

    return 0;
}
