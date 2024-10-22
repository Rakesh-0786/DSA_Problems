#include<bits/stdc++.h>
using namespace std;

int findM(int arr[], int n) {
    vector<int> ls; // Vector to store elements that occur more than n/3 times
    for (int i = 0; i < n; i++) {
        // Check if arr[i] is already in the ls vector
        if (find(ls.begin(), ls.end(), arr[i]) == ls.end()) {
            int count = 0;
            // Count occurrences of arr[i]
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            // If the element occurs more than n/3 times, return it
            if (count > n / 3) {
                return arr[i];
            }
            // Add the element to the ls vector to mark it as processed
            ls.push_back(arr[i]);
        }
    }
    return -1; // No element found
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = findM(arr, n);
    cout << ans << endl;
    return 0;
}
