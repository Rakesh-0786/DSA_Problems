#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
    vector<int> divisors;
    // Iterate from 1 to sqrt(n)
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i); // Add divisor i
            if (i != n / i) { // Check to avoid adding the square root twice
                divisors.push_back(n / i); // Add corresponding divisor n / i
            }
        }
    }
    // Sort the divisors in ascending order
    sort(divisors.begin(), divisors.end());
    // Print the divisors
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printDivisors(n);
    return 0;
}
