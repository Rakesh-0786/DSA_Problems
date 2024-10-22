// find the first occurence of a given element x, given that the given array is sorted.If no occurence of x is found then return -1.

// brute force:-
// linear search
#include<bits/stdc++.h>
using namespace std;

// // Brute force method to find the first occurrence of x
int f(vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            return i;  // Return the first occurrence index
        }
    }
    return -1;  // If x is not found, return -1
}

int main() {
    vector<int> arr = {2, 5, 5, 5, 56, 6, 8, 9, 9, 9};  // Initialize the vector
    int x = 5;  // The element to find

    // Call the function to find the first occurrence of x
    int ans = f(arr, x);
    cout << ans << endl;  // Output the result

    return 0;
}



// optimal solution:-

