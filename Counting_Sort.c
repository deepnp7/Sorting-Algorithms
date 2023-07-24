#include <stdio.h>



 
  
on to print an array
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
