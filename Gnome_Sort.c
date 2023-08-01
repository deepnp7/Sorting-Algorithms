

    while (pos < n) {
        if (pos == 0 || arr[pos] >= arr[pos-1]) {
            pos++;
        } else {
            int temp = arr[pos];
            arr[pos] = arr[pos-1];
            arr[pos-1] = temp;
            pos--;
        }
    }
}

int main() {
    int arr[] = {10, 5, 8, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    gnome_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

