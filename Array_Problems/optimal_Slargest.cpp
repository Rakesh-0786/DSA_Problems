#include<bits/stdc++.h>
using namespace std;

// Function to find the second largest element
int findSlargest(vector<int>& arr, int n) {
    int largest = arr[0];
    int secondL = -1;

    // Traverse the array to find the largest and second largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondL = largest;  // Update second largest
            largest = arr[i];   // Update largest
        } else if (arr[i] < largest && arr[i] > secondL) {
            secondL = arr[i];  // Update second largest if it is smaller than the largest but larger than secondL
        }
    }
    
    return secondL;
}

int main() {
    int n;
    cin >> n;  // Input the size of the array
    vector<int> arr(n);

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and output the second largest number
    int ans = findSlargest(arr, n);
    if (ans == -1) {
        cout << "There is no second largest number." << endl;
    } else {
        cout << "Second largest number is: " << ans << endl;
    }
    
    return 0;
}
