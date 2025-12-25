#include <iostream>
#include <string>

using namespace std;

string solve(long long current, long long target) {
    if (current == target) {
        return "YES";
    }
    if (current > target) {
        return "NO";
    }

    if (solve(current * 10, target) == "YES") {
        return "YES";
    }
    if (solve(current * 20, target) == "YES") {
        return "YES";
    }

    return "NO";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        cout << solve(1, N) << endl;
    }
    return 0;
}