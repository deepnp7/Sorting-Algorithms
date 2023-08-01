#include <iostream>

void gnomeSort(int arr[], int size) {
    int index = 0;

    while (index < size) {
        if (index == 0 || arr[index] >= arr[index - 1]) {
            // If the element is in the correct position or at the beginning
            // of the array, move to the next element.
            index++;
        } else {
            // Swap the current element with the previous element
            std::swap(arr[index], arr[index - 1]);

            // Move one step back to check the previous element
            index--;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    gnomeSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

