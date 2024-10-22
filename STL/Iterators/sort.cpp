#include <iostream>
#include <algorithm> // For std::sort

using namespace std;

void explainSort() {
    // Function definition for sorting (currently empty)
}

int main() {
    int arr[] = {1, 6, 8, 4, 435, 46, 4};
    int size = sizeof(arr) / sizeof(arr[0]); // Get the number of elements in the array

    // Sort the array
    sort(arr, arr + 3);

    // Print sorted array
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
