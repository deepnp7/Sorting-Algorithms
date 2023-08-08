#include<stdio.h>


void ins(int* A, int n)
{
    int key,j;
   for(int i=1;i<=n-1;i++)
   {
     key=A[i];
     j=i-1;
     while(j>=0 && A[j]>key) // ascending order 
     // descending order // while(j>=0 && A[j]<key)
     {
        A[j+1]=A[j];
        j--;
     }
     A[j+1]=key;
   }
}
 
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
