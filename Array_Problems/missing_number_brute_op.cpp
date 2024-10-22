#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {  // Corrected this condition
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            return i;
        }
    }
    return n + 1;  // This handles the case where all numbers from 1 to n are present
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = findMissing(arr, n);
    cout << ans;
    return 0;
}
