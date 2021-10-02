#include<iostream>



using namespace std;



int main()



{  



 cout<<"AAYUSH ARORA\n";



 cout<<"20BCS1141\n";



 cout<<"CSE 1-B\n------------------\n";



 int size,key,pos,i;



 int flag=0;



 cout<<"Enter the size of Linear array : ";



 cin>>size;



 int LA[size];



 cout<<"\nEnter the elements in the array : ";



 for(i=0;i<size;i++)



 cin>>LA[i];



 cout<<endl;



 cout<<"\nEnter the key value which you want to search in an array : ";



 cin>>key;



 for(i=0;i<size;i++)



 {



  if(LA[i]==key)



  {



   pos=i;



   flag=1;



   break;



  }



 }



 if(flag==0)



 cout<<"Ohh! key is not present : \n"<<endl;



 else 



 {



 cout<<"\nInside Array, key is present at index position : "<<pos;



 cout<<"\n\nInside Array, key is present at position : "<<pos+1;



 }



 return 0;



}
