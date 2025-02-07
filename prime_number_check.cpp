#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false; // 0 and 1 are not prime
    
    for (int i = 2; i * i <= n; i++) { // Loop until sqrt(n)
        if (n % i == 0) {
            return false; // If divisible, it's not prime
        }
    }
    return true; // If no divisors, it's prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    
    return 0;
}
