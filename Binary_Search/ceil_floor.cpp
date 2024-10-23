// Given an unsorted array arr[] of integers and an integer x, find the floor and ceiling of x in arr[].
// Floor of x is the largest element which is smaller than or equal to x. Floor of x doesn’t exist if x is smaller than smallest element of arr[].
// Ceil of x is the smallest element which is greater than or equal to x. Ceil of x doesn’t exist if x is greater than greatest element of arr[].
// Return an array of integers denoting the [floor, ceil]. Return -1 for floor or ceiling if the floor or ceiling is not present.

#include<bits/stdc++.h>
using namespace std;

vector<int> getFloorAndCeil(int x, vector<int>& arr) {
    int n = arr.size();  // Calculate the size of the array
    int floor = -1;
    int ceil = -1;
    
    // Iterate through the entire array to find floor and ceiling
    for(int i = 0; i < n; i++) {
        // Check for floor
        if(arr[i] <= x) {
            // If arr[i] is smaller than or equal to x, update floor if it's larger than the current floor
            if(floor == -1 || arr[i] > floor) {
                floor = arr[i];
            }
        }
        // Check for ceiling
        if(arr[i] >= x) {
            // If arr[i] is greater than or equal to x, update ceiling if it's smaller than the current ceiling
            if(ceil == -1 || arr[i] < ceil) {
                ceil = arr[i];
            }
        }
    }
    
    // Return the vector containing floor and ceiling
    return {floor, ceil};
}

int main() {
    vector<int> arr = {10, 5, 6, 8, 12, 20, 1};
    int x = 7;
    
    vector<int> result = getFloorAndCeil(x, arr);
    
    cout << "Floor: " << result[0] << ", Ceil: " << result[1] << endl;
    
    return 0;
}
