#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate p^q
int findP(int p, int q) {
    if (q == 0) {
        return 1;  // Base case: p^0 = 1
    }
    return p * findP(p, q - 1);  // Recursive case: p^q = p * p^(q-1)
}

int main() {
    int p, q;
    cout << "Enter the base (p): ";
    cin >> p;
    cout << "Enter the exponent (q): ";
    cin >> q;

    int ans = findP(p, q);  // Call the recursive function
    cout << p << "^" << q << " = " << ans << endl;

    return 0;
}

