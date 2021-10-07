#include<bits/stdc++.h>
using namespace std;
int main(){
int n;          //no of elements in array
  cin>>n;
  int dup=0;      //duplicate element
  vector<int>v(n);  //creating a vector of size n
  for(int i=0;i<n;i++){
    cin>>v[i];
    dup=dup^v[i];
  }
  for(int i=1;i<=n-1;i++){
    dup=dup^i;
  }
  cout<<"The duplicate element is "<<dup<<" \n";
}
