#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1;

        int maxSum = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            int sum = arr[i] + arr[i + 1];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 4, 3, 2, 5, 7};  
    cout << obj.pairWithMaxSum(arr) << endl;  
    return 0;
}
