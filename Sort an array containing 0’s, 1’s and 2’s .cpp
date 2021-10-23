// cpp code for Sorting an array containing 0’s, 1’s and 2’s (Dutch National Flag Problem)

/*
  Problem Statement:
                  Given an array containing only 0’s, 1’s, and 2’s, sort it in linear time and using constant space.
  
  e.g-
        Input:  { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 }
        Output: { 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2 }
        
*/

// Method-1
// code 

#include <bits/stdc++.h>
using namespace std;

void solve( vector< int > &a ){
     
     int cnt_0 = 0, cnt_1 = 0;
     
     for( auto i:a){
          if( i==0 ) cnt_0++;
          else if( i==1 ) cnt_1++;
     }
     
     for( int i = 0; i < a.size(); i++){
          if( i < cnt_0 ) a[i] = 0;
          else if( i >= cnt_0 && i < (cnt_0+cnt_1)) a[i]=1;
          else a[i]=2;
     }
}

// Driver code
int main()
{
	int n;
	cin >> n;
	vector< int > a(n);
	for( int i = 0; i < n; i++) cin >> a[i];
	solve(a);
	cout << "After sorting:" << '\n';
	for( int i = 0; i < n; i++) cout << a[i] << " ";
  
	return 0;
}


// Method 2:

// code 

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& a) {
    int l = 0, mid = 0, h = a.size() - 1;
    while (mid <= h)
        if (a[mid] == 0)
            swap(a[mid++], a[l++]);
        else if (a[mid] == 1)
            mid++;
        else 
            swap(a[mid], a[h--]);
}

// Driver code
int main()
{
	int n;
	cin >> n;
	vector< int > a(n);
	for( int i = 0; i < n; i++) cin >> a[i];
	solve(a);
	cout << "After sorting:" << '\n';
	for( int i = 0; i < n; i++) cout << a[i] << " ";
  
	return 0;
}
