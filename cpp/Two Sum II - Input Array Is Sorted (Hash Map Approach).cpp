class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> seen;

        for(int i = 0; i < numbers.size(); i++){
            int x = numbers[i];
            int need = target - x;

            if(seen.find(need) != seen.end()){
                return {seen[need] + 1, i + 1};
            }else{
                seen[x] = i;
            }
        }
        return {};
    }
};
