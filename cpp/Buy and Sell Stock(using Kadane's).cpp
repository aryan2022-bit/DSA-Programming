#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxDiff = 0, currProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            int diff = prices[i] - prices[i - 1];
            currProfit = max(0, currProfit + diff);
            maxDiff = max(maxDiff, currProfit);
        }

        return maxDiff;
    }
};

// Driver code to test the function
int main() {
    Solution obj;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << obj.maxProfit(prices) << endl;
    return 0;
}
