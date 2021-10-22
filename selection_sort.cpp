#include <iostream>
using namespace std;
int main()	
{
    int arr[10],len;
    cout<<"Enter the length of array : ";
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[j]<arr[i])
            {
            arr[i]+=arr[j];
            arr[j]=arr[i]-arr[j];
            arr[i]-=arr[j];
            }
        }
    }
    cout<<"Shorted array";
    for(int i=0;i<len;i++)
    {
        cout<<"\nElement "<<i+1<<" : "<<arr[i];
    }
    return 0;
}
