#include<bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();

    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    vector<int> ans;

    // Traverse the matrix in spiral order
    while (top <= bottom && left <= right) {
        // Traverse from left to right on the top row
        for (int i = left; i <= right; i++) {
            ans.push_back(mat[top][i]);
        }
        top++;

        // Traverse from top to bottom on the right column
        for (int i = top; i <= bottom; i++) {
            ans.push_back(mat[i][right]);
        }
        right--;

        // Traverse from right to left on the bottom row, if rows are remaining
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // Traverse from bottom to top on the left column, if columns are remaining
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result = spiralMatrix(mat);

    // Output the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
