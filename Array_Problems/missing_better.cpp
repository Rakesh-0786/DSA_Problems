#include<bits/stdc++.h>
using namespace std;

int findM(int arr[], int n) {
    int hash[n + 1] = {0};  // Create a hash array initialized to 0

    // Mark the presence of numbers in the hash array
    for (int i = 0; i < n; i++) {
            hash[arr[i]] = 1;
        }
    

    // Find the smallest missing number
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {  // If any number is not marked, return it
            return i;
        }
    }

    // If no number is missing, return n + 1
    return n + 1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the function to find the missing number
    int ans = findM(arr, n);

    cout << "The missing number is: " << ans << endl;
    return 0;
}
