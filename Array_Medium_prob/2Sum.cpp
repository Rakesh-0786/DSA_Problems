#include <bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target) {
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int a = book[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end()) {
            return "YES"; // Found a pair that sums to target
        }
        mpp[a] = i; // Store the element and its index
    }

    return "NO"; // No pair found
}

int main() {
    int n; // Number of elements in the vector
    cout << "Enter the number of elements: ";
    cin >> n; // Input size of the array

    vector<int> book(n); // Create a vector of size n
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> book[i]; // Input elements into the vector
    }

    int target; // Target sum
    cout << "Enter the target sum: ";
    cin >> target; // Input the target sum

    // Call the read function and print the result
    string result = read(n, book, target);
    cout << result << endl; // Output the result

    return 0; //
}