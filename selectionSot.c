#include <stdio.h>

void createArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", &A[i]);
    }
}

void printArray(int A[], int n)
{
    printf("\nArray is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n\n");
}
void selectionSort(int *A, int n)
{
    int minIndex,temp;
    for (int i = 0; i < n-1; i++)
    {
        minIndex=i;
        //2 3 1 4 5 6
        for (int j = i+1; j < n; j++)
        {
            if(A[j]<A[minIndex])
            {
                minIndex=j;
            }                 //4 5 6
            temp=A[i];
            A[i]=A[minIndex];
            A[minIndex]=temp;
        }
        
    }  
}

int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    createArray(arr, n);
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
}
