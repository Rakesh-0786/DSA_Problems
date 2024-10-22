#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNo(vector<int> a) {
    long long n = a.size();
    // Calculate expected sums
    long long Sn = (n * (n + 1)) / 2; // Sum of first n natural numbers
    long long s2n = (n * (n + 1) * (2 * n + 1)) / 6; // Sum of squares of first n natural numbers
    
    long long s = 0, s2 = 0;
    
    // Calculate the actual sums from the array
    for (int i = 0; i < n; i++) {
        s += a[i];       // Sum of elements
        s2 += (long long)a[i] * a[i]; // Sum of squares of elements
    }
    
    // s - Sn = x - y (x is missing, y is repeating)
    long long val1 = s - Sn; // x - y
    // s2 - s2n = x^2 - y^2 = (x - y)(x + y)
    long long val2 = s2 - s2n; // x^2 - y^2
    
    // val2 / val1 = x + y
    val2 = val2 / val1; // x + y
    
    long long x = (val1 + val2) / 2; // (x - y + x + y) / 2 = x
    long long y = x - val1; // y = x - (x - y)
    
    return {(int)x, (int)y}; // return missing and repeating number
}

int main() {
    vector<int> arr = {3, 1, 2, 5, 3}; // Example input
    vector<int> result = findMissingRepeatingNo(arr);
    
    cout << "Missing Number: " << result[0] << ", Repeating Number: " << result[1] << endl;
    
    return 0;
}
