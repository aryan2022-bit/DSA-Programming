#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int low = 0, high = n - 1;
        int floorVal = -1, ceilVal = -1;

        // Finding Floor (Largest element <= x)
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= x) {
                floorVal = arr[mid]; // Update floor
                low = mid + 1; // Move right to find a larger floor
            } else {
                high = mid - 1; // Move left
            }
        }

        // Reset low and high for Ceil search
        low = 0, high = n - 1;

        // Finding Ceil (Smallest element >= x)
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= x) {
                ceilVal = arr[mid]; // Update ceil
                high = mid - 1; // Move left to find a smaller ceil
            } else {
                low = mid + 1; // Move right
            }
        }

        return {floorVal, ceilVal};
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr;
        int x;
        cin >> x;

        int num;
        while (cin.peek() != '\n' && cin >> num) {
            arr.push_back(num);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
