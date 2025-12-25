#include <bits/stdc++.h>
using namespace std;

int findSingleElement(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;  // XOR all elements
    }
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Unique element: " << findSingleElement(nums) << endl;
    return 0;
}
