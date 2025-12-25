#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int ans = -1;  // To store the largest element ≤ x

        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] <= x) {
                ans = mid;   // Update answer (as mid is a valid floor)
                low = mid + 1;  // Move right to find a larger floor
            } else {
                high = mid - 1;  // Move left to find a smaller number
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        
        while (ss >> number) {
            arr.push_back(number);
        }
        
        int x;
        cin >> x;
        cin.ignore();
        
        Solution ob;
        int ans = ob.findFloor(arr, x);
        cout << ans << endl;
    }
    return 0;
}
