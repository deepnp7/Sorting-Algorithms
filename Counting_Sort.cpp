#include <iostream>
#include <vector>

void countingSort(int arr[], int size) {
    if (size <= 0)
        return;

    // Find the maximum element to determine the range of values
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }

    // Create a count array to store the occurrences of each element
    std::vector<int> count(maxElement + 1, 0);

    // Count the occurrences of each element in the input array
    for (int i = 0; i < size; ++i) {
        count[arr[i]]++;
    }

    // Modify the count array to store the cumulative sum
    for (int i = 1; i <= maxElement; ++i) {
        count[i] += count[i - 1];
    }

    // Create a temporary array to store the sorted elements
    int* temp = new int[size];

    // Build the sorted array based on the count array
    for (int i = size - 1; i >= 0; --i) {
        temp[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }

    // Free the memory allocated for the temporary array
    delete[] temp;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    countingSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

 
