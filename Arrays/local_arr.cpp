#include <iostream>
using namespace std;

int main() {
    int arr[5];  // Local array, uninitialized
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Will print garbage values
    }
    return 0;
}
