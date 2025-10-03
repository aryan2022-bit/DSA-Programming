#include <bits/stdc++.h>
using namespace std;

class Solution {
public :
    static vector <int> twoSum(vector<int> &nums, int target){
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return{};
    }
};
int main() {
    int n;
    cout << "Enter size of you array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter your array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    int target;
    cout <<"Enter your target element: ";
    cin >> target;
    
    // Solution obj;
    // vector<int> result = obj.twoSum(nums, target);
    
    vector<int> result = Solution :: twoSum(nums, target);
    
    if(!result.empty()){
        cout<<"Indices are: "<<result[0]<<" & "<< result[1] <<endl;
    }else{
        cout <<"No such pairs found !" <<endl;
    }
    
    return 0;
}
