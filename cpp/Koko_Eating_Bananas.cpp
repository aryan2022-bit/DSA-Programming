#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long left = 1, right = *max_element(piles.begin(), piles.end());
        long ans = right;

        while(left <= right){
            long mid = left + (right - left)/2;
            long hrs = 0;

            for(int pile : piles){
                hrs = hrs + (pile + mid - 1)/mid;
            }

            if(hrs <= h){
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << sol.minEatingSpeed(piles, h) << endl;
    return 0;
}
