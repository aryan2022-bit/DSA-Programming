#include <iostream>
using namespace std;

int main() {
    int num1, num2, result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) {
            throw "Division by zero condition!";
        }
        result = num1 / num2;
        cout << "The result is: " << result << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}

