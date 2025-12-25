#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSumMap; // {prefixSum, first index}
    int prefixSum = 0, maxLength = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i]; // Calculate prefix sum

        // If prefix sum itself is k, update maxLength
        if (prefixSum == k)
            maxLength = i + 1;

        // If (prefixSum - k) exists in map, update maxLength
        if (prefixSumMap.find(prefixSum - k) != prefixSumMap.end()) {
            maxLength = max(maxLength, i - prefixSumMap[prefixSum - k]);
        }

        // Store first occurrence of prefixSum in map
        if (prefixSumMap.find(prefixSum) == prefixSumMap.end()) {
            prefixSumMap[prefixSum] = i;
        }
    }

    return maxLength;
}

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    int k = 15;
    cout << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
