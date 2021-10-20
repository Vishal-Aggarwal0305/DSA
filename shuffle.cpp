#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// Utility function to swap elements `A[i]` and `A[j]` in an array
void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
 
// Function to shuffle an array `A` of `n` elements
void shuffle(int A[], int n)
{
    // read array from the lowest index to highest
    for (int i = 0; i <= n - 2; i++)
    {
        // generate a random number `j` such that `i <= j < n`
        int j = i + rand() % (n - i);
 
        // swap the current element with the randomly generated index
        swap(A, i, j);
    }
}
 
int main(void)
{
    int A[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(A) / sizeof(A[0]);
 
    // seed for random input
    srand(time(NULL));
 
    shuffle(A, n);
 
    // print the shuffled array
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
 
    return 0;
}
