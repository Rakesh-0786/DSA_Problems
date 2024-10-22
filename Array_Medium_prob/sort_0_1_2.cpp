#include<bits/stdc++.h>
using namespace std;

void SortNums(int nums[], int n) {
    int low = 0, mid = 0, high = n - 1;
    
    // Dutch National Flag Algorithm to sort 0s, 1s, and 2s
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {  // nums[mid] == 2
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int nums[n];

    cout << "Enter the elements (0, 1, 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    SortNums(nums, n);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
