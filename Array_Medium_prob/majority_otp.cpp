#include <bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n) {
    int count1 = 0, count2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN; // Initialize with default values

    // Find potential candidates for majority elements
    for (int i = 0; i < n; i++) {
        if (count1 == 0 && arr[i] != el2) {
            count1 = 1;
            el1 = arr[i];
        } else if (count2 == 0 && arr[i] != el1) {
            count2 = 1;
            el2 = arr[i];
        } else if (el1 == arr[i]) {
            count1++;
        } else if (el2 == arr[i]) {
            count2++;
        } else {
            count1--;
            count2--;
        }
    }

    vector<int> ls;
    count1 = 0, count2 = 0;

    // Count occurrences of the potential candidates
    for (int i = 0; i < n; i++) {
        if (el1 == arr[i]) count1++;
        if (el2 == arr[i]) count2++;
    }

    // Minimum count for an element to be considered a majority element
    int mini = n / 3 + 1;
    if (count1 >= mini) ls.push_back(el1);
    if (count2 >= mini && el1 != el2) ls.push_back(el2); // Avoid duplicates

    sort(ls.begin(), ls.end()); // Sort the result
    return ls;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the elements and store the result in a vector
    vector<int> ans = find(arr, n);

    // Print the elements from the result vector
    if (!ans.empty()) {
        for (int x : ans) {
            cout << x << " ";
        }
    } else {
        // If no element occurs more than n/3 times, print -1
        cout << -1;
    }

    cout << endl;

    return 0;
}
