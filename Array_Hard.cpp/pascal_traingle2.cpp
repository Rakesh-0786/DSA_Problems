// print any Nth row of Pascal traingle 
#include<bits/stdc++.h>
using namespace std;

void printNthRowOfPascal(int n) {
    long long ans = 1;  // Initialize the first element of the row as 1
    cout << ans << " "; // Print the first element
    
    for (int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";  // Print the subsequent elements
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the row number (starting from 0): ";
    cin >> n;
    
    printNthRowOfPascal(n + 1);  // Pass n+1 because nth row has n+1 elements
    return 0;
}



