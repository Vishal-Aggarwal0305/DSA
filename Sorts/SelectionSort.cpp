#include<iostream>
using namespace std;
int main()
{
    int i,j,min1,temp;
    int a[5];
    cout<<"Enter Element to Sort:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];            //getting list

    }
    for(i=0; i<5-1; i++) //for starting element
    {
        min1=i;
        for(j=i+1;j<5;j++)//for smallest element in list
        {
            if(a[min1]>a[j])
            {

            min1=j;
            cout<<min1;
            }
        }
        temp=a[i];         //swapping
        a[i]=a[min1];
        a[min1]=temp;
    }
cout<<"Sorted List:";
for(i=0;i<5;i++)
    {
       cout<<a[i]<<endl;          //displaying list
    }
}
