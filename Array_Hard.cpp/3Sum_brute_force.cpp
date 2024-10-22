#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int>& num) {
    set<vector<int>> st;  // Use set of vectors to avoid duplicate triplets
    
    // Brute-force three loops
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (num[i] + num[j] + num[k] == 0) {
                    vector<int> temp = {num[i], num[j], num[k]};
                    sort(temp.begin(), temp.end());  // Sort to avoid duplicates in different orders
                    st.insert(temp);  // Insert into set to maintain unique triplets
                }
            }
        }
    }

    // Convert set back to vector
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
    vector<int> num = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = triplet(num.size(), num);

    for (const auto& vec : result) {
        for (int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
