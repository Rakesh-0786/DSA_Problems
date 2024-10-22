#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n) {
    int reverseNum = 0;
    int duplicateN = n;
    
    // Reverse the number
    while (n > 0) {
        int ld = n % 10;  // Extract last digit
        reverseNum = (reverseNum * 10) + ld;  // Build reverse number
        n = n / 10;  // Remove the last digit
    }
    
    // Check if the original number is equal to the reversed number
    if (duplicateN == reverseNum) {
        return true;  // It's a palindrome
    } else {
        return false;  // Not a palindrome
    }
}

int main() {
    int n;
    cin >> n;
    
    bool ans = checkPalindrome(n);  // Call the function
    
    if (ans) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
    
    return 0;
}


