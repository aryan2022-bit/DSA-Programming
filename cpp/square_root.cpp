#include <iostream>
using namespace std;

class Solution {
public:
    int floorSqrt(int n) {
        // Handle edge cases
        if (n == 0 || n == 1)
            return n;

        int left = 1, right = n;
        int ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // To avoid integer overflow, use long long for square
            long long square = 1LL * mid * mid;

            if (square == n)
                return mid;  // Perfect square root found
            else if (square < n) {
                ans = mid;        // Potential answer
                left = mid + 1;   // Search right half
            } else {
                right = mid - 1;  // Search left half
            }
        }

        return ans;  // Floor of the square root
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = sol.floorSqrt(n);
    cout << "Floor of square root: " << result << endl;

    return 0;
}
