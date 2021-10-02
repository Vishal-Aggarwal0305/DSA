//c++ code to concatenate two arrays 

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int sizeone, sizetwo ;
    int arr[50] ; 
    int array[50] ;
    int concatenate[10] ,i;

    int key ;

    cout<<"Input size of array one " ;
    cin>> sizeone ;

    cout<<"Input size of array two " ;
    cin>> sizetwo ;

    cout<<"ENter the first array" <<endl ;
    for ( i = 0; i < sizeone; i++)
    {
      cin>>arr[i] ;
    }
      
    cout<<"ENter the two array" <<endl ;
    for ( i = 0; i < sizetwo; i++)
    {
      cin>>array[i] ;
    }
    
     
    for ( i = 0; i < sizeone; i++)
    {
        concatenate[i] = arr[i] ;
    }
    key = i ;
    for ( i = 0; i < sizetwo; i++)
    {
        concatenate[key] = array[i] ;
        key++ ;
    }

    for ( i = 0; i < key; i++)

    {
        cout << concatenate[i] << " " ;
    }
    
    return 0;
}