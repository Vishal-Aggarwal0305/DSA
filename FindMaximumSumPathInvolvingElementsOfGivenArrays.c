#include <stdio.h>
 
// Utility function to find the minimum of two integers
int max (int x, int y) {
    return (x > y) ? x : y;
}
 
// Function to find the maximum sum path in two given arrays.
// The code is similar to the merge routine of the merge sort algorithm
int findMaxSum(int X[], int Y[], int m, int n)
{
    int sum = 0;
    int sum_x = 0, sum_y = 0;
 
    // `i` and `j` denotes the current index of `X` and `Y`, respectively
    int i = 0, j = 0;
 
    // loop till `X` and `Y` are empty
    while (i < m && j < n)
    {
        // to handle the duplicate elements in `X`
        while (i < m-1 && X[i] == X[i+1]) {
            sum_x += X[i++];
        }
 
        // to handle the duplicate elements in `Y`
        while (j < n-1 && Y[j] == Y[j+1]) {
            sum_y += Y[j++];
        }
 
        // if the current element of `Y` is less than the current element of `X`
        if (Y[j] < X[i])
        {
            sum_y += Y[j];
            j++;
        }
 
        // if the current element of `X` is less than the current element of `Y`
        else if (X[i] < Y[j])
        {
            sum_x += X[i];
            i++;
        }
 
        else    // if (X[i] == Y[j])
        {
            // consider the maximum sum and include the current cell's value
            sum += max(sum_x, sum_y) + X[i];
 
            // move both indices by 1 position
            i++, j++;
 
            // reset both sums
            sum_x = 0, sum_y = 0;
        }
    }
 
    // process the remaining elements of `X` (if any)
    while (i < m) {
        sum_x += X[i++];
    }
 
    // process the remaining elements of `Y` (if any)
    while (j < n) {
        sum_y += Y[j++];
    }
 
    sum += max(sum_x, sum_y);
    return sum;
}
 
int main()
{
    int X[] = { 3, 6, 7, 8, 10, 12, 15, 18, 100 };
    int Y[] = { 1, 2, 3, 5, 7, 9, 10, 11, 15, 16, 18, 25, 50 };
 
    int m = sizeof(X)/sizeof(X[0]);
    int n = sizeof(Y)/sizeof(Y[0]);
 
    printf("The maximum sum is %d", findMaxSum(X, Y, m, n));
 
    return 0;
}
