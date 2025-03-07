#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();       // Number of rows
        int m = matrix[0].size();    // Number of columns

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) { 
                if (matrix[i][j] == target) {
                    return true; // Target found
                }
            }
        }
        return false; // Target not found
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;

    bool result = sol.searchMatrix(matrix, target);
    cout << (result ? "Target Found" : "Target Not Found") << endl;
    return 0;
}
