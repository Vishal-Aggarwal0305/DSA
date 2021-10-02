#include <bits/stdc++.h>
using namespace std;
 
void findEquilibriumIndex(int A[], int n)
{
    int total = accumulate(A, A + n, 0);
 
    int right = 0;
 
    for (int i = n - 1; i >= 0; i--)
    {
     
        if (right == total - (A[i] + right)) {
            cout << "Equilibrium Index found " << i << endl;
        }
 
        right += A[i];
    }
}
 
int main()
{
    int n, A[100];
    cin>>n;
    for(int i=0; i<n; i++){
    cin>>A[i];
    }
 
    findEquilibriumIndex(A, n);
 
    return 0;
}