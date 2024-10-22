#include <bits/stdc++.h>
using namespace std;

void sortNum(int arr[], int n) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Count the number of 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else if (arr[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }

    // Fill the array with 0s, 1s, and 2s based on the counts
    for (int i = 0; i < count0; i++) {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++) {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++) {
        arr[i] = 2;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortNum(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
