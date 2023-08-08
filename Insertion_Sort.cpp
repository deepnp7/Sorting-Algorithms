#include<stdio.h>


 
 int main()
 {
    int A[]={7,11,9,2,17,4};
    int n=6;
    printf("UNSORTED ARRAY : ");
    printArray(A,n);
    ins(A,n);
    printf("  SORTED ARRAY : ");
    printArray(A,n);
 }
