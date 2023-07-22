#include <iostream>
#include <algorithm>
#include <random>

// Function to check if the array is sorted
bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to shuffle the elements of the array randomly
void shuffleArray(int arr[], int size) {
    std::random_device rd;
    std::mt19937 rng(rd());

    for (int i = size - 1; i > 0; --i) {
        std::uniform_int_distribution<int> dist(0, i);
        int j = dist(rng);
        std::swap(arr[i], arr[j]);
    }
}

// Bogo sort function
void bogoSort(int arr[], int size) {
    while (!isSorted(arr, size)) {
        shuffleArray(arr, size);
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

    bogoSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}





