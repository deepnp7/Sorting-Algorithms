#include <stdio.h>

// function to perform counting sort
void counting_sort(int array[], int size) {
  // find the maximum element in the array
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }

  // create a count array to store the count of each element
  int count[max + 1];
  for (int i = 0; i <= max; i++) {
    count[i] = 0;
  }

  // calculate the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // modify the count array to store the position of each element in the sorted array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // create a sorted array and fill it using the count array
  int sorted[size];
  for (int i = 0; i < size; i++) {
    sorted[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // copy the sorted array back to the original array
  for (int i = 0; i < size; i++) {
    array[i] = sorted[i];
  }
}

// function to print an array
void print_array(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {5, 2, 8, 3, 6, 1, 7, 9, 4};
  int size = sizeof(array) / sizeof(array[0]);

  printf("Unsorted array:\n");
  print_array(array, size);

  counting_sort(array, size);

  printf("Sorted array:\n");
  print_array(array, size);

  return 0;
}
