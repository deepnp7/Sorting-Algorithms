
    }
}

int main() {
    int arr[] = {5, 2, 6, 1, 3, 9, 4, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cocktail_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) {
       printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

