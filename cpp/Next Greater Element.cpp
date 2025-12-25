#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;
        
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        
        return ans;
    }
};

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    
    Solution obj;
    vector<int> result = obj.nextLargerElement(arr);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
