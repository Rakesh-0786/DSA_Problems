#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if (n == 0) return 0;  // Handle the base case for n = 0
    if (n == 1) return 1;  // Handle the base case for n = 1

    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int ans = a + b;
        a = b;
        b = ans;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the position (n) to find the Fibonacci number: ";
    cin >> n;

    int result = f(n);
    cout << "The Fibonacci number at position " << n << " is: " << result << endl;

    return 0;
}
