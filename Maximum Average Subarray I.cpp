class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = 0.0;
        int sum = 0;

        for(int i = 0; i < k; i++){
            sum = sum + nums[i];
        }
        maxAvg = (double)sum/k;

        for(int j = k; j < nums.size(); j++){
            sum = sum - nums[j-k] + nums[j];
            double avg = (double)sum/k;
            maxAvg = max(maxAvg, avg);
        }
        return maxAvg;
    }
};
