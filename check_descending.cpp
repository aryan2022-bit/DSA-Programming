#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 907;
    int temp = 0; 
    bool key = true; 

    while (n > 0) {
        int digit = n % 10; 
        if (temp <= digit) {
            temp = digit;
        } else {
            key = false;
            break;
        }
        n = n / 10; 
    }
    
    cout << key;
    return 0;
}

