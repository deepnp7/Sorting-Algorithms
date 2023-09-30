


int main() {
    int arr[] = {4, 1, 7, 3, 6, 9, 2, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    printf("\nWave sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
