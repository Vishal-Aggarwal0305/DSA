#include <stdio.h>
 
// Recursive function to find the number of ways to fill an `n × 4` matrix
// with `1 × 4` tiles
int findTotalWays(int n)
{
    // base cases
    if (n < 1) {
        return 0;
    }
 
    if (n < 4) {
        return 1;
    }
 
    if (n == 4) {
        return 2;
    }
 
    // combine the results of placing a tile horizontally and
    // placing 4 tiles vertically
    return findTotalWays(n - 1) + findTotalWays(n - 4);
}
 
int main(void)
{
    int n = 5;
    printf("The total number of ways is %d", findTotalWays(n));
 
    return 0;
}




