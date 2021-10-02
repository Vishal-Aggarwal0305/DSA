#include<iostream>



using namespace std;







int main()



{  



 cout<<"AAYUSH ARORA\n";



 cout<<"20BCS1141\n";



 cout<<"CSE 1-B\n------------------\n";



 int arr[10]={0,1,2,4,5,6,8,9,11,12};



 int key=11;



 cout<<"\n";



 int start=0,end=10-1; // end = size -1 



 int flag=0;



 while(start<=end)



 {



  int mid=(start+end)/2;



  if(arr[mid]==key)



  {



  cout<<"In Array, key is present at index position "<<mid<<"\n";



  cout<<"In Array, key is present at position "<<mid+1; 



  flag=1;



  break;



  }



  else if(arr[mid]>key)



  {



   end=mid-1;



  }



  else 



  start=mid+1;



 }



 if(flag==0)



 {



  cout<<"key is not present"<<endl;



 }







 return 0;



}
