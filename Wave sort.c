
#include <stdio.h>

void waveSort(int arr[], int n) {
    for (int i = 0; i < n; i += 2) {
        if (i > 0 && arr[i] < arr[i-1])
            swap(&arr[i], &arr[i-1]);
        if (i < n-1 && arr[i] < arr[i+1])
            swap(&arr[i], &arr[i+1]);
    }
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[] = {4, 1, 7, 3, 6, 9, 2, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    waveSort(arr, n);
    
    printf("\nWave sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
