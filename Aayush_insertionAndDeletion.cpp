#include <iostream>
using namespace std;

   
    void insert(int LA[],int &N,int k,int key)
    
{
    if(k<0||k>N)     // K is basically the location 
    cout<<"Index not found enter valid Index position ";
    else
    {
    cout<<"\n";
    N++;
    for(int i=N-1;i>k;i--)  
    LA[i]=LA[i-1];
    LA[k]=key;
    cout<<"\n";
    }
}

int del_key(int LA[],int &N,int key)
{   
    for(int i=0;i<N;i++)
    { 
      
      if(key==LA[i])
      {
       int pos=i;
       for(int i=pos;i<N;i++)
       LA[i]=LA[i+1];
       N--;
       cout<<"\n";
       cout<<"key Matched :\n";
       return 1;
      }
    }

}
void del_loc(int LA[],int &N,int k)
{   
    int i;
    cout<<"\n\n";
    if(k<0||k>N-1)
    cout<<"Index not found enter valid Index position ";
    else
    {
        for(i=k;i<N;i++)
        LA[i]=LA[i+1];
        cout<<"Element deleted successfully :----- \n";
    
    N--;
    cout<<"\n\n";

    }
}
void display(int LA [],int &N)
{  
    int i;
    if(N!=0)
    {
    for(i=0;i<N;i++)
    cout<<"at Index :"<<i<<"="<<LA[i]<<endl;
    cout<<"\n\n";
    }
    else
    cout<<"array is empty :\n";
}

int main()
{
    
    int option;
    int N,k,key,i,choice;
    cout<<"Enter size of array : ";
    cin>>N;
    int LA[N];
    cout<<"enter the elements of array : ";
    for(i=0;i<N;i++)
    cin>>LA[i];
    cout<<"\n";
    cout<<"array elements are :  ";
    for(int i=0;i<N;i++)
    cout<<LA[i]<<"  ";
    cout<<"\n\n";
    do{
    
    cout<<"\nchoose the options : \n\n";
    cout<<"press 1 for insertion \n";
    cout<<"press 2 for deletion \n";
    cout<<"press 3 to display array elements \n";
    cout<<"press 0 to exit \n"; 
   
    cin>>option;
   
    switch(option)
    {
        case 1:
        
        cout<<"Enter the key value which you want to insert in Array : ";
        cin>>key;
        cout<<"\n";
        cout<<"Enter the Index position where you want to insert : ";
        cin>>k;
        insert(LA,N, k, key);
        break;
        
        case 2:
        
        cout<<"press 1 if you want to delete the element  by location :\n\n";
        cout<<"press 2 if you want to delete the element  by key :\n\n";
        cin>>choice;
        
        if(choice==1)
        {
        cout<<"enter the Index position which you want to delete :  ";
        cin>>k;
        del_loc(LA,N,k);
        }
        
        else if(choice==2)
        {
        cout<<"Enter the key value which you want to delete :  ";
        cin>>key;
        int flag=del_key(LA,N,key);
        if(flag==1)
        {
        cout<<"\nElement deleted successfully :----- \n";
        }
        else
        {
        cout<<"key not found :\n";
        }
        cout<<"\n";
        }
        else
        cout<<"enter valid option ";
        break;
        case 3:
        cout<<"display array elements :"<<endl;
        display(LA,N);
        break;

        default:
        cout<<"pls enter valid option :\n";
        
    }
    
    }while(option!=0);
    cout<<"program end";
    return 0;
}

