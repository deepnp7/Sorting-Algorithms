#include <iostream>
#include <algorithm>

void waveSort(int arr[], int size) {
    // Traverse all even-indexed elements
    for (int i = 0; i < size; i += 2) {
        // If the current even element is smaller than the previous element, swap them
        if (i > 0 && arr[i] < arr[i - 1]) {
            std::swap(arr[i], arr[i - 1]);
        }
        // If the current even element is smaller than the next element, swap them
        if (i < size - 1 && arr[i] < arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
    }
}


int main() {
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int size = sizeof(arr) / sizeof(arr[0]);


