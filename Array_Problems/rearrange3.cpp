// if pos and neg are  not equal
#include <bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>& a) {
    int n = a.size();  // Corrected the size variable declaration
    vector<int> pos, neg;  // Changed to vectors for positive and negative numbers
    
    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            pos.push_back(a[i]);
        } else {
            neg.push_back(a[i]);
        }
    }

    // Check which vector has more elements (pos or neg)
    if (pos.size() > neg.size()) {
        for (int i = 0; i < neg.size(); i++) {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        // Fill remaining positive numbers
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++) {
            a[index] = pos[i];
            index++;
        }
    } else {
        for (int i = 0; i < pos.size(); i++) {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        // Fill remaining negative numbers
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++) {
            a[index] = neg[i];
            index++;
        }
    }

    return a;  // Return the modified array
}

int main() {
    vector<int> arr = {1, 2, -3, -4, -1, 4, -6, 7};  // Example array
    vector<int> result = alternateNumbers(arr);  // Call the function

    // Output the rearranged array
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
