class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        //Step 1 : Counting Frequencies
        unordered_map<int, int> mpp;
        for(int i : nums){
            mpp[i]++;
        }

        //Step 2 : Pushing the values in heap according to frequency count
        for(auto it : mpp){
            int val = it.first;
            int freq = it.second;

            pq.push({freq, val}); // Notice that we pushed freq as key in the first position

            if(pq.size() > k){
                pq.pop();
            }
        }

        //Step 3 : Storing result in resultant vector and returning it
        vector<int> result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};



//COMPLEXITIES : 
Complexity	Value
Time	O(n log k)
Space	O(n)
