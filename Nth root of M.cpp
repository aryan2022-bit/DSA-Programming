#include <iostream>
using namespace std;

class Solution {
  public:
    int nthRoot(int n, int m) {
        int low = 1, high = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long res = 1;

            for (int i = 1; i <= n; i++) {
                res *= mid;
                if (res > m) break;
            }

            if (res == m) return mid;
            else if (res < m) low = mid + 1;
            else high = mid - 1;
        }

        return -1;
    }
};

int main() {
    Solution sol;
    int n, m;

    cout << "Enter the root (n): ";
    cin >> n;
    cout << "Enter the number (m): ";
    cin >> m;

    int result = sol.nthRoot(n, m);
    if (result == -1)
        cout << "No integer root exists." << endl;
    else
        cout << "The " << n << "th root of " << m << " is: " << result << endl;

    return 0;
}
