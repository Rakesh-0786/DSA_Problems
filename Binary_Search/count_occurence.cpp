// Problem statement
// You have been given a sorted array/list of integers 'arr' of size 'n' and an integer 'x'.
// Find the total number of occurrences of 'x' in the array/list.

#include <bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of x
int findFirst(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            ans = mid;       // Update ans to current mid
            high = mid - 1;  // Move left to find earlier occurrence
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Function to find the last occurrence of x
int findLast(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            ans = mid;      // Update ans to current mid
            low = mid + 1;  // Move right to find later occurrence
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Function to return first and last positions of x
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x) {
    int res1 = findFirst(arr, n, x);
    int res2 = findLast(arr, n, x);
    return {res1, res2};
}

// Function to count occurrences of x
int count(vector<int>& arr, int n, int x) {
    auto positions = firstAndLastPosition(arr, n, x);
    int first = positions.first;
    int last = positions.second;
    if (first == -1) {
        return 0; // x is not present in the array
    }
    return last - first + 1; // Total occurrences
}

int main() {
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n; // Input the size of the array
    vector<int> arr(n);
    
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the elements of the array
    }
    
    cout << "Enter the integer to count occurrences of: ";
    cin >> x; // Input the integer to count

    int totalOccurrences = count(arr, n, x);
    cout << "Total occurrences of " << x << ": " << totalOccurrences << endl;

    return 0;
}
