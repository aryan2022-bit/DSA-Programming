class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for(int i = 0; i < numRows; i++){
            vector <int> row(i+1);

            row[0] = 1;
            row[i] = 1;

            for(int j = 1; j < i; j++){
                row[j] = result[i-1][j-1] + result[i-1][j];
            }

            result.push_back(row);
        }
        return result;
    }
};
