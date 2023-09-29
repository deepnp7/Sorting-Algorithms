#include <iostream>

// Function to partition the array into two segments
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the rightmost element as the pivot
    int i = low - 1; // Index of the smaller element

    for (int j = low; j < high; ++j) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            ++i; // Increment index of the smaller element
            std::swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
        }
    }

    std::swap(arr[i + 1], arr[high]); // Swap arr[i + 1] and arr[high], put the pivot in its correct place
    return i + 1; // Return the partitioning index
}

// Function to perform the quick sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort the elements before and after the partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(arr, 0, size - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

  
    
