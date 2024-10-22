#include<bits/stdc++.h>
using namespace std;

int findM(int arr[], int n) {
    int sum = (n * (n + 1)) / 2;  
    int s2 = 0;
    
    // Calculate the sum of the array elements
    for(int i = 0; i <n; i++) {
        s2 += arr[i];
    }
    
    // Return the missing number
    return sum - s2;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and print the missing number
    int ans = findM(arr, n);
    cout << ans;

    return 0;
}
