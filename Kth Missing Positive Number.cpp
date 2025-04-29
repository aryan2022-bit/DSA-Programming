#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0; // Tracks how many positive integers are missing
        int curr = 1;  // Start checking from 1
        int i = 0;     // Pointer for array

        while (count < k) {
            if (i < arr.size() && curr == arr[i]) {
                // If current number is present in array, skip it
                i++;
            } else {
                // Current number is missing
                count++;
                if (count == k) {
                    return curr; // Found the kth missing number
                }
            }
            curr++; // Move to next number
        }

        // This return should never be reached due to loop condition
        return -1;
    }
};

// Optional: Test the function
int main() {
    Solution sol;
    vector<int> arr1 = {2, 3, 4, 7, 11};
    int k1 = 5;
    cout << "Output: " << sol.findKthPositive(arr1, k1) << endl; // Output: 9

    vector<int> arr2 = {1, 2, 3, 4};
    int k2 = 2;
    cout << "Output: " << sol.findKthPositive(arr2, k2) << endl; // Output: 6

    return 0;
}
