#include <bits/stdc++.h>
using namespace std;

int _lis(int arr[], int n, int* max_ref)
{
    if (n == 1) //Base case.
        return 1;
 
    
    int res, max_ending_here = 1; // 'max_ending_here' is length of LIS
 
    for (int i = 1; i < n; i++) {
        res = _lis(arr, i, max_ref);
        if (arr[i - 1] < arr[n - 1]
            && res + 1 > max_ending_here)
            max_ending_here = res + 1;
    }
 
    if (*max_ref < max_ending_here)
        *max_ref = max_ending_here; // Compare max_ending_here with the overall max. And update the overall max if needed.
 
    // Return length of LIS ending with arr[n-1]
    return max_ending_here;
}
 
int lis(int arr[], int n)
{
    
    int max = 1; // The max variable holds the result
 
    _lis(arr, n, &max);
 
    return max;
}
 
int main()
{ 
    int n;
    int arr[n];
    n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout <<lis(arr, n);
    return 0;
}
