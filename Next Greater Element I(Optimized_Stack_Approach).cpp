class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int> ans;
       stack<int> st;
       unordered_map<int, int> nextGreater;

       for(int i = 0; i < nums2.size(); i++){
            while(!st.empty() && nums2[i] > st.top()){
                nextGreater[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
       }

       while(!st.empty()){
            nextGreater[st.top()] = -1;
            st.pop();
       }

       for(int j = 0; j < nums1.size(); j++){
            ans.push_back(nextGreater[nums1[j]]);
       }
       return ans;
    }
};
