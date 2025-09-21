class Solution {
public:
    int digitSquareSum(int n){
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum = sum + (digit * digit);
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;

        while(n != 1){
            if(seen.find(n) != seen.end()){
                return false;
            }
            seen.insert(n);
            n = digitSquareSum(n);
        }
        return true;
    }
};
