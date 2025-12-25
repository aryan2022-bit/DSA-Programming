#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxDiff = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxDiff = max(maxDiff, price - minPrice);
        }

        return maxDiff;
    }
};
