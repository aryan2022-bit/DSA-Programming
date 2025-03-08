#include <iostream>
#include <vector>
#include <algorithm>  // For reverse()

using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        int max_from_right = arr[n - 1];  
        vector<int> leadersList;  

        leadersList.push_back(max_from_right); // Last element is always a leader

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max_from_right) {
                max_from_right = arr[i];  
                leadersList.push_back(max_from_right);  
            }
        }

        // Reverse to maintain correct order
        reverse(leadersList.begin(), leadersList.end());

        return leadersList;
    }
};

// Driver function to test the Solution
int main() {
    Solution obj;
    int n;
    
    // Taking input size
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    
    // Taking input array elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calling the function
    vector<int> result = obj.leaders(arr);

    // Printing the output
    cout << "Leaders in the array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
