class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int> result;

       for(int i = 0; i < nums1.size(); i++){
            int found = -1;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    for(int k = j+1; k < nums2.size(); k++){
                        if(k < nums2.size() && nums2[k] > nums2[j]){
                            found = nums2[k];
                            break;
                        }
                    }
                result.push_back(found);
                break;
            }
       }
       }
       return result; 
    }
};
