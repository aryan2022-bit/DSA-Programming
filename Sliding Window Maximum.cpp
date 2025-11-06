class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            //Step 1 : Window ke bahar wale elements ko bahar nikalo (indexes hi pop)
            if(!dq.empty() && dq.front() == i-k){
                dq.pop_front();
            }

            //Step 2 : Smaller elements ko bahar nikalo
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }

            //Step 3 : Keep pushing new indexes
            dq.push_back(i);

            //Step 4 : Push back the elements to the result vector
            if(i >= k-1){
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
    }
};
