#include <iostream>
#include <vector>
using namespace std;

int getSingleElement(const vector<int>& arr) {
    int xorr = 0; // Initialize XOR variable
    for (int num : arr) {
        xorr ^= num; // XOR each number in the array
    }
    return xorr; // Return the single element
}

int main() {
    vector<int> arr = {2, 3, 5, 2, 3, 7, 5}; // Example input
    int singleElement = getSingleElement(arr);
    cout << "The single element is: " << singleElement << endl; // Output should be 7
    return 0;
}
