#include <iostream>
using namespace std;

int arr[5];  // Global array, automatically initialized to 0

int main() {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Will print 0 for each element
    }
    return 0;
}


// int arr[5] = {0};  // Initializes all elements to 0
