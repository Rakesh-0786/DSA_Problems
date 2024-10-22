#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    vector<int> col(m, 0);  // Use std::vector for dynamically sized arrays
    vector<int> row(n, 0);

    // Step 1: Mark the rows and columns that are to be zeroed
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;  // Mark row `i`
                col[j] = 1;  // Mark column `j`
            }
        }
    }

    // Step 2: Set the corresponding rows and columns to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> result = zeroMatrix(matrix, n, m);

    cout << "Matrix after setting zeros:" << endl;
    for (const auto &row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
