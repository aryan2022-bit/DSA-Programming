#include <iostream>

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows and columns for the matrices: ";
    std::cin >> rows >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    std::cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    std::cout << "Sum of the matrices:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << sum[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

