#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> freqMap;

        // Step 1: Count occurrences using hashmap
        for (int num : arr) {
            if (num >= 1 && num <= n) {
                freqMap[num]++; // Count only numbers in range [1, n]
            }
        }

        // Step 2: Construct result array with correct indexing
        vector<int> result(n, 0); // Initialize all with 0
        for (int i = 1; i <= n; i++) {
            result[i - 1] = freqMap[i]; // Assign frequency of number i to result[i-1]
        }

        return result;
    }
};

// Driver code for testing
int main() {
    vector<int> arr = {2, 3, 2, 3, 5};
    Solution obj;
    vector<int> result = obj.frequencyCount(arr);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
