#include <iostream>

int main() {
    int myArray[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2D array
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << myArray[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}

