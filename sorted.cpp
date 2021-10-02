#include <iostream>
using namespace std;
int is_sorted(int arr[], int n)
{
  for(int i=1;i<=n;i++)
  {
    if(arr[i]<arr[i-1])
    return -1;  
  }
      return 1;
  
}
int main() {
  int arr[5]={1,2,3,4,5};
  int x=is_sorted(arr, 5);
  if(x==1)
  cout<<"array is sorted";
  else
  cout<<"array is not sorted";
  return 0;
}