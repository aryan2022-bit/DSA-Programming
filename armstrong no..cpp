#include <iostream>
#include <cmath>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int numDigits = countDigits(num);
    
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    
    return sum == originalNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (isArmstrong(num)) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }
    
    return 0;
}

