

int main() {
    int arr[] = {5, 2, 8, 9, 4, 3, 1, 0, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cycleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
