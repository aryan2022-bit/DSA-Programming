#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());

        int low = 1;
        int high = stalls.back() - stalls.front();
        int result = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int count = 1;
            int lastPos = stalls[0];

            for (int i = 1; i < stalls.size(); i++) {
                if (stalls[i] - lastPos >= mid) {
                    count++;
                    lastPos = stalls[i];
                }
            }

            if (count >= k) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return result;
    }
};
