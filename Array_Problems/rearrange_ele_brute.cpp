#include<bits/stdc++.h>
using namespace std;

void f(int arr[], int n){  // Changed return type to void since nothing is being returned
    vector<int> pos, neg;
    
    // Separate positive and negative numbers into pos and neg vectors
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }
    
    int i = 0;
    // Fill the array by alternating between positive and negative numbers
    while (i < pos.size() && i < neg.size()) {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
        i++;
    }

    // No need to handle extra positives or negatives if equal sizes are guaranteed in input
}

int main() {
    int arr[] = {1, 2, -3, -4, -1, 4, -6, 7};  // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    f(arr, n);  // Call the function to rearrange the array

    // Output the rearranged array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
