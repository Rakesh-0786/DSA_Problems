#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;

    // Merging the two arrays while maintaining uniqueness
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else if (a[i] > b[j]) {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        } else {
            // When both elements are equal
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    // Adding remaining elements from array a
    while (i < n) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    // Adding remaining elements from array b
    while (j < m) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr; // Return the merged sorted array
}

int main() {
    // Example usage
    vector<int> a = {1, 3, 5, 7}; // Example array a
    vector<int> b = {2, 3, 6, 8}; // Example array b

    vector<int> result = sortedArray(a, b); // Call the sortedArray function

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
