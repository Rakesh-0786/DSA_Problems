#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count == 2; // A prime number has exactly two divisors: 1 and itself
}

int main() {
    int n;
    cin >> n;
    bool ans = isPrime(n);
    if (ans) {
        cout << "It is a Prime Number" << endl;
    } else {
        cout << "It is not a Prime Number" << endl;
    }
    return 0;
}
