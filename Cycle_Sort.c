#include <stdio.h>

void cycleSort(int arr[], int n) 

        if (pos == cycleStart) 
        {
            continue;
        }
        while (item == arr[pos]) {
            pos++;
        }
        if (pos != cycleStart) {
            int temp = item;
            item = arr[pos];
            arr[pos] = temp;
        }
        while (pos != cycleStart) {
            pos = cycleStart;
            for (int i = cycleStart+1; i < n; i++) {
                if (arr[i] < item) {
                    pos++;
                }
            }
            while (item == arr[pos]) {
                pos++;
            }
            if (item != arr[pos]) {
                int temp = item;
                item = arr[pos];
                arr[pos] = temp;
            }
        }
    }
}

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
