#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(vector<int> arr, int n) {  // Return type is vector<int>
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;  // Return the modified vector
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = rotateLeft(arr, n);  // Capture returned vector
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";  // Print the rotated vector
    }
    cout << endl;
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// void rotateLeft(vector<int> &arr, int n) {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++) {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n); // Use vector<int> to initialize arr properly
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     rotateLeft(arr, n); // No need to capture the return value
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "; // Print the rotated array
//     }
//     cout << endl;
//     return 0;
// }
