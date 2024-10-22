#include<bits/stdc++.h>
using namespace std;

int findSecondLargestNumber(vector<int>& arr, int n) {
    // Sort the array
    sort(arr.begin(), arr.end());
    
    int largest = arr[n - 1];  // The largest element is the last element after sorting
    int secondL = -1;  // Initialize second largest as -1 (in case no second largest is found)
    
    // Traverse from the second last element to find the second largest
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {  // Find the first element smaller than the largest
            secondL = arr[i];
            break;
        }
    }
    
    return secondL;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and output the second largest number
    int result = findSecondLargestNumber(arr, n);
    if (result == -1)
        cout << "There is no second largest number." << endl;
    else
        cout << "Second largest number is: " << result << endl;

    return 0;
}
