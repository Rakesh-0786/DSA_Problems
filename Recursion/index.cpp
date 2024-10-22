#include <bits/stdc++.h>
using namespace std;

int addSum(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int a, b;  
    cout << "Enter the value of a: ";
    cin >> a;  
    
    cout << "Enter the value of b: ";
    cin >> b;  
    
    int ans = addSum(a, b);  
    cout << "The sum is: " << ans << endl;  
    
    return 0;
}
