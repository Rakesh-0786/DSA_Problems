#include <bits/stdc++.h>
using namespace std;

int findMajority(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > n / 2) {
            return arr[i];  // Majority element found
        }
    }
    return -1;  // No majority element found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int majorityElement = findMajority(arr, n);
    
    cout<<majorityElement;
    return 0;
}
