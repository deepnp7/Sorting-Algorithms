#include 
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < heap_size && heap[left] > heap[largest
    {
}

void heap_to_array(int *heap, int heap_size, int *array) 
{
    for (int i = 0; i < heap_size; i++) 
    {
        array[i] = heap[i];
    }
}

int main() 
{
    int heap[] = {54,12,35,10,28,25,38,89,26};
    int heap_size = sizeof(heap) / sizeof(heap[0]);
    build_max_heap(heap, heap_size);
    int array[heap_size];
    printf("The sorted Array is : ");
    heap_to_array(heap, heap_size, array);
    for (int i = 0; i < heap_size; i++) 
    {
        printf("%d ", array[i]);
    }
    return 0;
}
