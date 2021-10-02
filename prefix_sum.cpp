#include <bits/stdc++.h>
using namespace std;
 
void PrefixSum(int arr[], int n, int pre_sum[])
{
    pre_sum[0] = arr[0];
 
    for (int i = 1; i < n; i++)
        pre_sum[i] = pre_sum[i - 1] + arr[i];
}
 
int main()
{
    int n,arr[n];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int pre_sum[n];
 
    PrefixSum(arr, n, pre_sum);
    for (int i = 0; i < n; i++)
        cout << pre_sum[i] << " ";
}
