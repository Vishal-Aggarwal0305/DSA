#include<iostream>
using namespace std;
//main logic 
int rotate(int arr[],int n){
    int element=arr[n-1];
    int i;
    for(i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[1]=element;
    
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;
    //rotating array kth times
    for(int i=0;i<k;i++){
        rotate(arr,n);
    }
    //printing the rotated array
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}