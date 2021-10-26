#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n,d,x;
    cin>>n>>d;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }

    vector<int> b;
    // //int n = a.size();
    int k = d%n;
    //b[0] = a[k];
    b.push_back(a[k]);
    for(int i=k+1;i<n;i++){
        b.push_back(a[i]);
    }
    for(int i=0;i<k;i++){
        b.push_back(a[i]);
    }

    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    //cout<<k;
    return 0;
}
