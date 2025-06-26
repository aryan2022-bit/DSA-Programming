class Solution {
public:
    int minBitFlips(int start, int goal) {
        int value = start ^ goal;

        int flips = 0;

        while(value != 0){
            if( value & 1) flips++;
            value = value >> 1;
        }
        return flips;
    }
};
