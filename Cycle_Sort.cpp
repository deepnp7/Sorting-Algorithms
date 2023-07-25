#include <iostream>

void cycleSort(int arr[], int size) {
    for (int cycleStart = 0; cycleStart < size - 1; ++cycleStart) {
        int item = arr[cycleStart];

        // Find the position where we put the item
        int pos = cycleStart;
        for (int i = cycleStart + 1; i < size; ++i) {
            if (arr[i] < item) {
                pos++;
            }
        }

        // If the item is already in the correct position
        if (pos == cycleStart) {
            continue;
        }

        // Otherwise, put the item to its correct position by rotating the cycle
        while (item == arr[pos]) {
            pos++;
        }
        std::swap(item, arr[pos]);

        // Rotate the rest of the cycle
        while (pos != cycleStart) {
            pos = cycleStart;
            for (int i = cycleStart + 1; i < size; ++i) {
                if (arr[i] < item) {
                    pos++;
                }
            }
            while (item == arr[pos]) {
                pos++;
            }
            std::swap(item, arr[pos]);
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

    cycleSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

