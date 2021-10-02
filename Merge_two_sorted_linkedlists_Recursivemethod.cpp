#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
    
};


void insertAtEnd(node* &head, int val){
    
    node* n = new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp = head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=n;
}

node* merge_recursive(node* &head1, node* &head2){
    
    if(head1==NULL){
        return head2;
    }
    
    if(head2==NULL){
        return head1;
    }
    node* newhead;
    
    if(head1->data<head2->data){
        newhead=head1;
        newhead->next=merge_recursive(head1->next,head2);
    }
    else{
        newhead=head2;
        newhead->next=merge_recursive(head1,head2->next);
    }
    
    return newhead;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
   node* head1= NULL;
   node* head2= NULL;
   
//   This is to enter the elements in the linked list.
   
   int arr1[]={1,3,8,10};
   int arr2[]={2,4,6,7};
   
   for(int i=0;i<4;i++){
       insertAtEnd(head1,arr1[i]);
   }

   for(int i=0;i<4;i++){
       insertAtEnd(head2,arr2[i]);
   }
   cout<<"The first list"<<endl;
   display(head1);
   cout<<"The second list"<<endl;
   display(head2);
   
   node* result = merge_recursive(head1,head2);
   cout<<"The resultant linked list after merging"<<endl;
   display(result);

   
    return 0;
}
