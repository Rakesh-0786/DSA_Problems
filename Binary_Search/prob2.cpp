// Find the square root of the given non negative value x.Round it off to the nearest floor integer value.

#include<bits/stdc++.h>
using namespace std;

int findSqRoot(int x) {
    int ans = -1;
    // Loop from 0 to x to find the square root
    for (int i = 1; i <= x; i++) {
                // if(i*i<=x)  
        // to avoid overflow

        if (i <= x / i) {
            ans = i;
        } else {
            break;
        }
    }
    return ans;
}

int main() {
    int x = 6;  
    int ans2 = findSqRoot(x);
    cout << ans2;  // Output the square root
    return 0;
}
