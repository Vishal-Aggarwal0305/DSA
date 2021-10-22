#include<iostream>

using namespace std;

int ceil(int arr[],int n, int x)
{
    int low = 0;
    int high = n-1;
    int mid;
    int ceil = -1;

    while(low<=high)
    {
        mid = (low + high)/2;

        if(arr[mid] == x)
            return arr[mid];

        else if(x < arr[mid])
        {
            ceil = arr[mid];
            high = mid - 1;
        }

        else
            low = mid + 1;
return ceil;
    }
}

int floor(int arr[],int n, int x)
{
    int low = 0;
    int high = n - 1;
    int mid;
    int floor = -1;

    while(low <= high)
    {
        mid = (low+high)/2;

        if(arr[mid] == x)
            return arr[mid];

        else if(x < arr[mid])
            high = mid - 1;

        else{
            floor = arr[mid];
            low = mid + 1;
        }
    return floor;
    }
}

int main(void)
{
  int n;
  cout<<"enter the number of elements of the array: ";
  cin>>n;

  cout<<"enter the elements: "<<endl;
  int arr[n];
  for(int i = 0; i < n; i++)
    cin>>arr[i];

  for(int i = 0; i < n; i++)
  {
      cout<<"Number is "<<arr[i]<<endl;
      cout<<"Ceil is "<<ceil(arr,n,i)<<endl;
      cout<<"Floor is "<<floor(arr,n,i)<<endl;
  }
}
