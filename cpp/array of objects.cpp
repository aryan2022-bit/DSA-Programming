#include <iostream>

class MyClass {
public:
    int data;
};

int main() {
    MyClass array[3];  // Array of objects
    
    for (int i = 0; i < 3; i++) {
        array[i].data = i * 10;
    }
    
    for (int i = 0; i < 3; i++) {
        std::cout << "Element " << i << ": " << array[i].data << std::endl;
    }
    
    return 0;
}

