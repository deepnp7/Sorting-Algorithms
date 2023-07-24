#include <stdio.h>



 

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
