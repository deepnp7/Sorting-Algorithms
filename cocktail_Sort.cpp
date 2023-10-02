#include <iostream>

void cocktailSort(int arr[], int size) {
    bool swapped = true;
    int start = 0;
    int end = size - 1;

    while (swapped) {
        // Reset the swapped flag on entering the loop,
        // because it might be true from a previous
        // swap that occurred at the end of the list
        swapped = false;

        // Loop from left to right, similar to the bubble sort
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop,
        // then the list is sorted
        if (!swapped)
            break;

        // Otherwise, reset the swapped flag so that it
        // can be used in the next stage
        swapped = false;

        // Move the end point back by one, because
        // the last element is already in its rightful spot
        --end;

        // Move from right to left
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // Move the starting point forward
        ++start;
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

    cocktailSort(arr, size);

    std::cout << "Cocktail sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

 
