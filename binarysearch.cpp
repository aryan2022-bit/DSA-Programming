#include <iostream>

using namespace std;

int binarySearchWithMinMax(int arr[], int size, int target, int* min, int* max) {
    int left = 0, right = size - 1;

    
    *min = arr[0];
    *max = arr[0];

    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (arr[mid] < *min) *min = arr[mid];
        if (arr[mid] > *max) *max = arr[mid];

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size, target;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    
    cout << "Enter " << size << " elements in sorted order: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    
    cout << "Enter the target value: ";
    cin >> target;

    int min, max;

    int result = binarySearchWithMinMax(arr, size, target, &min, &max);

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found." << endl;
    }

    cout << "Minimum value encountered: " << min << endl;
    cout << "Maximum value encountered: " << max << endl;

    return 0;
}

