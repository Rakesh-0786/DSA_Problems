#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    // Step 1: Traverse the matrix and mark rows and columns with -1 where needed
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                // Mark the entire row and column with -1, but avoid overwriting existing zeros
                for (int k = 0; k < cols; k++) {
                    if (matrix[i][k] != 0) matrix[i][k] = -1;
                }
                for (int k = 0; k < rows; k++) {
                    if (matrix[k][j] != 0) matrix[k][j] = -1;
                }
            }
        }
    }

    // Step 2: Traverse the matrix again and set all -1 to 0
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    setZeroes(matrix);

    cout << "Matrix after setting zeros:\n";
    printMatrix(matrix);

    return 0;
}
