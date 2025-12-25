class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxNum = arr[0];
        int maxIndex = 0;

        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > maxNum){
                maxNum = arr[i];
                maxIndex = i;
            }else{
                return maxIndex;
            }
        }
        return maxIndex;
    }
};
