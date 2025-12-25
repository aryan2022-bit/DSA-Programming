class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string sb;

        int open = 0;
        int close = 0;

        genBracket(n, open, close, sb, res);
        return res;
    }

    private:
        void genBracket(int n, int open, int close, string& sb, vector<string>& res){
            //base case
            if(sb.size() == 2*n){
                res.push_back(sb);
                return;
            }

            //open
            if(open < n){ 
            sb.push_back('(');
            genBracket(n, open+1, close, sb , res);
            sb.pop_back(); //backtrack
            }

            //close
            if(close < open){
            sb.push_back(')');
            genBracket(n, open, close+1, sb, res);
            sb.pop_back();//backtrack
            }
        }
};

//Time Complexity : O(2^2n)
//Space Complexity : O(2n)
