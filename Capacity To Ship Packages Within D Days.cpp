#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        for(int i : weights){
            sum = sum + i;
        }

        int low = *max_element(weights.begin(), weights.end());
        int high = sum;
        int ans = high;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            int currDays = 1;
            int currWeight = 0;

            for(int w : weights){
                if(currWeight + w > mid){
                    currDays++;
                    currWeight = 0;
                }
                currWeight = currWeight + w;
            }

            if(currDays <= days){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int result = sol.shipWithinDays(weights, days);
    cout << "Minimum capacity to ship within " << days << " days: " << result << endl;

    return 0;
}
