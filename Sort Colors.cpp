#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]); // Swap min element with current element
        }
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    obj.sortColors(nums);

    cout << "Sorted Colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
