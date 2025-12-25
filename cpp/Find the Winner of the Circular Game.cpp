class Solution {
public:
    int findTheWinner(int n, int k) {
        int idx = findWinnerIndex(n, k);
        return idx + 1;
    }

    public:
        int findWinnerIndex(int n, int k){
            //base case
            if(n == 1) return 0;
            return (findWinnerIndex(n-1, k) + k) % n;
        }
};
