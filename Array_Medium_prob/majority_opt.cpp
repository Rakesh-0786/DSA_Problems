#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int cnt = 0;
    int el = 0;

    // Boyer-Moore Voting Algorithm to find candidate
    for (int i = 0; i < v.size(); i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        } else if (v[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }

    // Validate if the candidate is actually a majority element
    int cnt1 = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == el) {
            cnt1++;
        }
    }

    if (cnt1 > v.size() / 2) {
        return el;  // Return majority element if it appears more than n/2 times
    }

    return -1;  // Return -1 if no majority element
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int result = majorityElement(v);

    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
