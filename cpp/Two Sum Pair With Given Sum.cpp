#include <bits/stdc++.h>
using namespace std;

bool twoSumExists(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end()); // Step 1: Sort the array
    int left = 0, right = arr.size() - 1; 

    while (left < right) {  // Two-pointer technique
        int sum = arr[left] + arr[right];

        if (sum == target) return true;  // ✅ Pair found
        else if (sum < target) left++;   // Need a larger sum
        else right--;                    // Need a smaller sum
    }
    
    return false;  // No pair found
}

int main() {
    int n, target;
    
    // User input: size of array
    cout << "Enter number of elements in array: ";
    cin >> n;
    
    vector<int> arr(n);
    
    // User input: array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // User input: target sum
    cout << "Enter the target sum: ";
    cin >> target;

    // Check if two numbers exist that sum to target
    if (twoSumExists(arr, target)) {
        cout << "Yes, a pair exists with the given sum." << endl;
    } else {
        cout << "No, no such pair exists." << endl;
    }

    return 0;
}
