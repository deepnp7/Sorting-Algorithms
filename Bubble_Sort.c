#include<stdio.h>

void bubbleSort(int* A,int n)
{
   for (int i = 0; i <=n; i++)
   {
    for (int j=0;j<=n-i-1;j++)
     {
        if(A[j]>A[j+1])
        {
            int temp= A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
     }
   } 
}

void printArray(int* A, int n)
{
    for(int i=0;i<=n;i++)
    {
      printf("  %d ", A[i]);    
    }
    printf("\n");
}
int main()
{
    int A[]={23, 86, 11, 34, 73, 72, 52};
    int n=7;
    printf("UNSORTED ARRAY : ");
     printArray(A,n);
     bubbleSort(A,n);
     printf("SORTED ARRAY : ");
     printArray(A,n);
    return 0;
}
