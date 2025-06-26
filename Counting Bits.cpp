class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> arr(n+1);
        for(int i = 0; i <= n; i++){
            arr[i] = countSetBits(i);
        }
        return arr;
    }

    int countSetBits(int n){
        int count = 0;
        while(n > 0){
            if(n & 1) count++;
            n = n >> 1;
        }
        return count;
    }
};
