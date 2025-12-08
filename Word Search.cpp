class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<bool>> used(m, vector<bool>(n, false));

        for(int r = 0; r < m; r++){
            for(int c = 0; c < n; c++){
                if(dfs(r, c, 0, board, word, used)) return true;
            }
        }
        return false;
    }
    bool dfs(int r, int c, int idx, vector<vector<char>>& board, string& word, vector<vector<bool>>& used){
        int m = board.size();
        int n = board[0].size();

        // Base Cases
        if(idx == word.size()) return true;

        if(r < 0 || r >= m || c < 0 || c >= n || used[r][c] || board[r][c] != word[idx]) return false;

        used[r][c] = true;

        bool res =  dfs(r + 1, c, idx + 1, board, word, used) ||
                    dfs(r - 1, c, idx + 1, board, word, used) ||
                    dfs(r, c + 1, idx + 1, board, word, used) ||
                    dfs(r, c - 1, idx + 1, board, word, used);
        
        used[r][c] = false;
        return res;
    }
};
