#include<bits/stdc++.h>
using namespace std;

int findSingle(vector<int>& arr) {
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        // Check if the start pointer has a valid next element to compare
        if (start + 1 < n && arr[start] == arr[start + 1]) {
            start += 2; // Move past the pair
        } 
        // Check if the end pointer has a valid previous element to compare
        else if (end - 1 >= 0 && arr[end] == arr[end - 1]) {
            end -= 2; // Move past the pair
        } 
        // If neither condition holds, we found the unique element
        else {
            return arr[start]; // Use 'start' instead of 'low'
        }
    }
    return -1; // Return -1 if not found, but this shouldn't happen with valid input
}

int main() {
    // Example test case
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int result = findSingle(arr);
    cout << "The single non-duplicate element is: " << result << endl;
    return 0;
}
