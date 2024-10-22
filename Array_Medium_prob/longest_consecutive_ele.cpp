#include <bits/stdc++.h>
using namespace std;

int longestS(vector<int> arr, int n) {
    if (arr.size() == 0) {
        return 0;
    }

    sort(arr.begin(), arr.end()); // Sort the array
    int count = 0;
    int lastSmaller = INT_MIN;
    int largest = 1;
    
    vector<int> res;        // Stores the current sequence
    vector<int> longestSeq;  // Stores the longest sequence

    for (int i = 0; i < n; i++) {
        if (arr[i] - 1 == lastSmaller) {
            res.push_back(arr[i]);
            count++;
            lastSmaller = arr[i];
        } else if (arr[i] != lastSmaller) { // If new sequence starts
            if (count > largest) {
                largest = count;        // Update the largest length
                longestSeq = res;       // Update the longest sequence
            }
            res.clear();                // Clear current sequence
            res.push_back(arr[i]);      // Start new sequence
            count = 1;
            lastSmaller = arr[i];
        }
    }

    // Final check to update the longest sequence at the end
    if (count > largest) {
        longestSeq = res;
        largest = count;
    }

    // Print the longest consecutive sequence
    cout << "Longest consecutive sequence: ";
    for (int num : longestSeq) {
        cout << num << " ";
    }
    cout << endl;

    return largest;  // Return the length of the longest consecutive sequence
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = longestS(arr, n);
    cout << "Length of longest consecutive sequence: " << ans << endl;
    
    return 0;
}
