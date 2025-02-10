#include <iostream>
#include <cmath>

using namespace std;

class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;  // Store the original number
        int sum = 0;

        // Using for loop to extract digits and compute cube sum
        for (; n > 0; n /= 10) {  
            int digit = n % 10;  
            sum += digit * digit * digit;  // Cube the digit and add to sum
        }

        return sum == original;  // Compare sum with the original number
    }
};

int main() {
    Solution sol;
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (sol.armstrongNumber(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
