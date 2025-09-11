class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        
        if(x == 1) return 1;

        int left = 0, right = x;

        while(left <= right){
            long long mid = left + (right - left)/2;

            if(mid*mid == x) return mid;
            else if(mid*mid > x) right = mid - 1;
            else left = mid + 1;
        } 
        return right;
    }
};
