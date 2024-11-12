/*
Problem statement
You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.



You are also given an integer 'k' which denotes the number of aggressive cows.



You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.



Print the maximum possible minimum distance.



Example:
Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}

Output: 2

Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6 4
0 3 4 7 10 9


Sample Output 1 :
3
 */

#include <bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int>& stalls, int dist, int cows) {
    int countCows = 1;
    int last = stalls[0];
    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - last >= dist) {
            countCows++;
            last = stalls[i];
        }
        if (countCows >= cows) {
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 1;
    int high = stalls[n - 1] - stalls[0];
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canWePlace(stalls, mid, k)) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return high;
}
int main(){
     int n, k;
    cin >> n >> k;           // Reading the number of stalls and cows
    vector<int> stalls(n);
    
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];    // Reading the stall positions
    }

    int result = aggressiveCows(stalls, k);
    cout << result << endl;  // Printing the maximum possible minimum distance

    return 0;
}