class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size(), left, right, maxLen = 0;

        for(int i = 1; i < n-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                left = i-1;
                right = i+1;

                while(left > 0 && arr[left] > arr[left-1]) left--;
                while(right < n-1 && arr[right] > arr[right+1]) right++;

                int length = right - left + 1;
                maxLen = max(maxLen, length);
            }
        }
        return maxLen;
    }
};
