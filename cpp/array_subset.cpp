#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to check if b is a subset of a (considering duplicates)
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int, int> freqA;
        
        // Store frequency of each element in a
        for (int num : a) {
            freqA[num]++;
        }

        // Check if each element in b appears at most as many times as in a
        for (int num : b) {
            if (freqA[num] == 0) {
                return false; // If b has an element missing in a
            }
            freqA[num]--; // Reduce count in a
        }
        
        return true; // All elements of b were found in a with enough occurrences
    }
};

int main() {
    Solution sol;
    int n, m;
    
    // Taking input for vector a
    cout << "Enter the number of elements in a: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements of a: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Taking input for vector b
    cout << "Enter the number of elements in b: ";
    cin >> m;
    vector<int> b(m);
    cout << "Enter elements of b: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Checking if b is a subset of a
    if (sol.isSubset(a, b)) {
        cout << "b is a subset of a" << endl;
    } else {
        cout << "b is not a subset of a" << endl;
    }
    
    return 0;
}
