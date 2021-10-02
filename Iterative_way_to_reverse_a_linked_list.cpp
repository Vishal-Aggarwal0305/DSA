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
    
    node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}


node* reverse_list(node* &head){
    
    node* prevpointer= NULL;
    node* current = head;
    node* nextptr;
    
    while(current!=NULL){
        nextptr= current->next;
        current->next=prevpointer;
        
        prevpointer = current;
        current = nextptr;
    }
    
    return prevpointer;  //As this will be the point of NEW HEAD;
}

void display(node* &head){
    node* temp =head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}

int main()
{
    node* head =NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    
    display(head);
    
    node* newhead = reverse_list(head);
    display(newhead);

    return 0;
}
