#include <iostream>
using namespace std;

int main()
{
    int size,loc,key;
    cout<<"Enter size of array : ";
    cin>>size;
    int LA[size];
    cout<<"\n";
    cout<<"enter the elements of array : ";
    for(int i=0;i<size;i++)
    cin>>LA[i];
    cout<<"\n";
    cout<<"array elements are :  ";
    for(int i=0;i<size;i++)
    cout<<LA[i]<<" ";
    cout<<"\n\n";
    cout<<"Enter the key value which you want to insert in Array : ";
    cin>>key;
    cout<<"\n";
    cout<<"Enter the location where you want to insert : ";
    cin>>loc;
    cout<<"\n";
    size++;
    for(int i=size-1;i>loc;i--)  
    LA[i]=LA[i-1];
    LA[loc]=key;
    cout<<"Element inserted successfully :----- \n";
    cout<<"\n";
    cout<<"Array After insertion  : \n\n";
    for(int i=0;i<size;i++)
    cout<<"at Index :"<<i<<"="<<LA[i]<<endl;
    cout<<"\n\n";
}
