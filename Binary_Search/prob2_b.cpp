#include<bits/stdc++.h>
using namespace std;

int findSqrt(int x) {
    if (x == 0 || x == 1) return x;  // Handle edge cases for 0 and 1

    int low = 1;
    int high = x;
    int ans = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // To avoid overflow in `mid * mid`, we check using division
        if (mid <= x / mid) {  // This condition is safe to prevent overflow
            ans = mid;         // Mid is a valid candidate for sqrt
            low = mid + 1;     // Move right to find the larger candidate
        } else {
            high = mid - 1;    // Move left if mid^2 is greater than x
        }
    }
    return ans;  // Return the integer part of the square root
}

int main() {
    int result = findSqrt(40);  // Example input
    cout << result << endl;     // Output the square root (nearest floor integer)
    return 0;
}
