
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
