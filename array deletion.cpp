#include <iostream>

int main() {
    int arr[100], size, position;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0 || size > 100) {
        std::cout << "Invalid array size." << std::endl;
        return 1; 
    }

    std::cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the position to delete (0-based index): ";
    std::cin >> position;

    if (position < 0 || position >= size) {
        std::cout << "Invalid position." << std::endl;
        return 1; 
    } else {
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

        std::cout << "Element at position " << position << " deleted successfully." << std::endl;

        
        std::cout << "Updated array: ";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout

