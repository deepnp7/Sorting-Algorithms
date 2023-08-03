#include <iostream>

// Function to perform the max heapify operation to maintain the max heap property
void maxHeapify(int arr[], int size, int rootIndex) {
    int largest = rootIndex;
    int leftChild = 2 * rootIndex + 1;
    int rightChild = 2 * rootIndex + 2;

    // Compare with the left child
    if (leftChild < size && arr[leftChild] > arr[largest]) {
        largest = leftChild;
    }

    // Compare with the right child
    if (rightChild < size && arr[rightChild] > arr[largest]) {
        largest = rightChild;
    }

    if (largest != rootIndex) {
        std::swap(arr[rootIndex], arr[largest]);

        // Recursively heapify the affected sub-tree
        maxHeapify(arr, size, largest);
    }
}

// Function to build a max heap from the input array
void buildMaxHeap(int arr[], int size) {
    // Start from the last non-leaf node and perform max heapify for all nodes
    for (int i = size / 2 - 1; i >= 0; --i) {
        maxHeapify(arr, size, i);
    }
}

// Heap sort function
void heapSort(int arr[], int size) {
    // Build a max heap from the input array
    buildMaxHeap(arr, size);

    // Extract elements one by one from the max heap
    for (int i = size - 1; i > 0; --i) {
        // Move the root (maximum element) to the end
        std::swap(arr[0], arr[i]);

        // Reduce the heap size and heapify the root node
        maxHeapify(arr, i, 0);
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

    heapSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

