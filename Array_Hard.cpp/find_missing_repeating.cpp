#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findMissingAndRepeating(const vector<int>& arr) {
    int n = arr.size();
    int repeating = -1; // Variable to store the repeating number
    int missing = -1;   // Variable to store the missing number

    // Step 1: Find the repeating number
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                repeating = arr[i];
                break;
            }
        }
        if (repeating != -1) break; // Break outer loop if found
    }

    // Step 2: Find the missing number
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            missing = i;
            break;
        }
    }

    return {missing, repeating};
}

int main() {
    vector<int> arr = {3, 1, 3}; // Example input
    auto result = findMissingAndRepeating(arr);
    cout << "Missing Number: " << result.first << ", Repeating Number: " << result.second << endl;
    return 0;
}
