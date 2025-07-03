class Solution {
    int maxGoldVal = 0;
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] != 0){
                    getMaxGold(i, j, 0, grid);
                }
            }
        }
        return maxGoldVal;
    }

    void getMaxGold(int row, int col, int currVal, vector<vector<int>>& grid){
        //base case
        if(row < 0 || col < 0 || row == grid.size() || col == grid[0].size() || grid[row][col] == 0){
            return;
        }

        currVal = currVal + grid[row][col];
        maxGoldVal = max(maxGoldVal, currVal);

        int val = grid[row][col];
        grid[row][col] = 0;

        getMaxGold(row + 1, col, currVal, grid);
        getMaxGold(row - 1, col, currVal, grid);
        getMaxGold(row, col + 1, currVal, grid);
        getMaxGold(row, col - 1, currVal, grid);

        grid[row][col] = val;

    }
};
