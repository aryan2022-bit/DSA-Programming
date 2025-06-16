class Solution {
public:
    int guessNumber(int n) {
       int low = 0, high = n;

       while(low <= high){
        int mid = low +(high - low)/2;

        int pick = guess(mid);

        if(pick == 0) return mid;
        else if(pick == 1) low = mid + 1;
        else high = mid - 1;
       }
       return -1; 
    }
};
