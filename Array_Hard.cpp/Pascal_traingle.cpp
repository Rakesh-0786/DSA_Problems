// Given R & C, tell the element at that place 
#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;
    // Use the property nCr = n * (n-1) * ... * (n-r+1) / r!
    for(int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);  // Corrected from (i - 1) to (i + 1)
    }
    return res;
}

int main() {
    int n = 5, r = 2;
    cout << "nCr(" << n << ", " << r << ") = " << nCr(n, r) << endl;
    return 0;
}


