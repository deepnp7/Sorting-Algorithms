#include<stdio.h>

void printArray(int* A,int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d  ",A[i]);
    }
    printf("\n");
}
void selectionSort(int* A, int n)
{ 
    int smallest, temp;
    for(int i=0;i<=n;i++)
    {
         smallest =i;
        for(int j=i+1;j<n;j++)
        {
          if(A[j]<A[smallest])
           {
            smallest=j;
           }
           temp = A[i];
           A[i] = A[smallest];
           A[smallest]= temp;
        }
    }
}
int main()
{
    int A[]={7,11,9,2,17,4};
    int n=6;
    printf("UNSORTED ARRAY : ");
     printArray(A,n);
     selectionSort(A,n);
    printf(" SORTED ARRAY : ");
     printArray(A,n);
    return 0;
}
