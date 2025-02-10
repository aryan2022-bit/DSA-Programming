#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int gcd = 1;
        
        // Corrected loop to find GCD (greatest common divisor)
        for (int i = 1; i <= min(a, b); i++) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;  // Keep updating to get the largest divisor
            }
        }

        int lcm = (a * b) / gcd;  // Calculate LCM

        return {lcm, gcd};  // Return as a list
    }
};

int main() {
    Solution sol;
    int a = 25, b = 75;
    vector<int> result = sol.lcmAndGcd(a, b);

    cout << "LCM: " << result[0] << ", GCD: " << result[1] << endl;
    return 0;
}
