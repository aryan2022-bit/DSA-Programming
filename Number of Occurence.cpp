#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countFreq(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int first = -1, last = -1;
        
        // Finding the first occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= target) {
                high = mid - 1;
                if (arr[mid] == target) first = mid;
            } else {
                low = mid + 1;
            }
        }

        // If target is not found, return 0
        if (first == -1) return 0;

        low = 0, high = arr.size() - 1;
        
        // Finding the last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= target) {
                low = mid + 1;
                if (arr[mid] == target) last = mid;
            } else {
                high = mid - 1;
            }
        }
        
        return last - first + 1;
    }
};

// Driver Code
int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();  // Ignore newline after reading test_case count
    
    while (test_case--) {
        vector<int> arr;
        int target;
        string input;

        // Read array input
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Read target input
        cin >> target;
        cin.ignore();  // Ignore newline after reading target

        Solution ob;
        int ans = ob.countFreq(arr, target);
        cout << ans << endl;
    }
    return 0;
}
