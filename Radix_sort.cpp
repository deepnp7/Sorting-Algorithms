#include <iostream>
#include <vector>

// Function to get the maximum value from the input array
int getMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Function to perform counting sort based on a specific digit position
void countingSortByDigit(int arr[], int size, int exp) {
    const int base = 10;
    int output[size];
    int count[base] = {0};

    // Count the occurrences of each digit at the given position
    for (int i = 0; i < size; ++i) {
        count[(arr[i] / exp) % base]++;
    }

    // Modify the count array to store the cumulative sum
    for (int i = 1; i < base; ++i) {
        count[i] += count[i - 1];
    }

    // Build the output array based on the count array and input array
    for (int i = size - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % base] - 1] = arr[i];
        count[(arr[i] / exp) % base]--;
    }

    // Copy the sorted elements back to the input array
    for (int i = 0; i < size; ++i) {
        arr[i] = output[i];
    }
}

// Radix sort function
void radixSort(int arr[], int size) {
    int maxVal = getMax(arr, size);

    // Perform counting sort for each digit position
    for (int exp = 1; maxVal / exp > 0; exp *= 10) {
        countingSortByDigit(arr, size, exp);
    }
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    radixSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

