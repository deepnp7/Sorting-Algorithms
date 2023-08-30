#include <iostream>
#include <algorithm>

const int RUN = 32;

// Function to perform insertion sort on a subarray
void insertionSort(int arr[], int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// Function to merge two sorted arrays
void merge(int arr[], int left, int mid, int right) {
    int len1 = mid - left + 1;
    int len2 = right - mid;

    int* leftArr = new int[len1];
    int* rightArr = new int[len2];

    for (int i = 0; i < len1; ++i)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < len2; ++i)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < len1 && j < len2) {
        if (leftArr[i] <= rightArr[j])
            arr[k++] = leftArr[i++];
        else
            arr[k++] = rightArr[j++];
    }

    while (i < len1)
        arr[k++] = leftArr[i++];
    while (j < len2)
        arr[k++] = rightArr[j++];

    delete[] leftArr;
    delete[] rightArr;
}

// Function to perform Tim sort
void timSort(int arr[], int size) {
    for (int i = 0; i < size; i += RUN)
        insertionSort(arr, i, std::min((i + RUN - 1), (size - 1)));

    for (int size = RUN; size < size; size *= 2) {
        for (int left = 0; left < size; left += 2 * size) {
            int mid = left + size - 1;
            int right = std::min((left + 2 * size - 1), (size - 1));
            merge(arr, left, mid, right);
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

    timSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

