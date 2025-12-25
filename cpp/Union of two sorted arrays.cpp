#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to return a list containing the union of the two sorted arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int m = a.size();
        int n = b.size();
        
        vector<int> arr;
        int i = 0, j = 0;
        
        while (i < m && j < n) {
            if (a[i] < b[j]) {
                if (arr.empty() || arr.back() != a[i]) {  // Ensure uniqueness
                    arr.push_back(a[i]);
                }
                i++;
            } else {
                if (arr.empty() || arr.back() != b[j]) {  // Ensure uniqueness
                    arr.push_back(b[j]);
                }
                j++;
            }
        }

        // Add remaining elements of `a` ensuring uniqueness
        while (i < m) {
            if (arr.empty() || arr.back() != a[i]) {
                arr.push_back(a[i]);
            }
            i++;
        }

        // Add remaining elements of `b` ensuring uniqueness
        while (j < n) {
            if (arr.empty() || arr.back() != b[j]) {
                arr.push_back(b[j]);
            }
            j++;
        }

        return arr;
    }
};

int main() {
    Solution ob;
    vector<int> a, b;
    string input;
    
    cout << "Enter the first sorted array (space-separated): ";
    getline(cin, input);  // Read entire line as a string
    stringstream ss1(input);
    int num;
    while (ss1 >> num) {
        a.push_back(num);
    }

    cout << "Enter the second sorted array (space-separated): ";
    getline(cin, input);  // Read entire line as a string
    stringstream ss2(input);
    while (ss2 >> num) {
        b.push_back(num);
    }

    vector<int> result = ob.findUnion(a, b);

    cout << "Union of the two arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
