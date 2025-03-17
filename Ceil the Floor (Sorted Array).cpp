#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    int low = 0, high = n - 1;
    int floor = -1, ceil = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] <= x) {
            floor = a[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] >= x) {
            ceil = a[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return {floor, ceil};
}

int main() {
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;

    pair<int, int> result = getFloorAndCeil(a, n, x);
    cout << result.first << " " << result.second << endl;

    return 0;
}
