#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse a string in-place
    string reverseString(string& s) {
        int left = 0, right = s.size() - 1;
        
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s;
    
    // Taking input from user
    cout << "Enter a string: ";
    cin >> s;
    
    // Reversing the string
    string reversedString = sol.reverseString(s);
    
    // Displaying the reversed string
    cout << "Reversed string: " << reversedString << endl;
    
    return 0;
}
