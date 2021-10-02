#include<iostream>
using namespace std;


class Node{
	public :
	int data;
	Node *next;

	Node(int data)
	{
		this -> data = data;
		next = NULL;
	}
};



Node *take_input2()
{
	int data;
	cin>> data;
	Node *head = NULL;
	Node *tail = NULL;

	while(data != -1)
	{
		Node *newNode = new Node(data);
		if(head == NULL)
		{
			head = newNode;  
			tail = newNode;               //time complexity is O(n)
		}
		else
		{
			tail -> next = newNode;
			tail = newNode;
		}

		cin>>data;
	}
	return head;

}


Node* insertNodeRec(Node *head, int i, int data) {
    
    if(head==NULL)
        return NULL;
    if(i==0){
        Node* temp=new Node(data);
        temp->next=head;
        return temp;
    }
    
    if(i==1){
        Node* temp=new Node(data);
        temp->next=head->next;
        head->next=temp;
        return head;
    }
    insertNodeRec(head->next,i-1,data);
    
    return head;
    
}



Node* deleteNodeRec(Node *head, int i) {
    
    if(head->next==NULL)
        return NULL;
    
    if(i==0){
        Node* temp=head->next;
        head->next=NULL;
        delete head;
        return temp;
    }
    if(i==1){
        Node *temp=head->next;
        head->next=temp->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
    deleteNodeRec(head->next,i-1);
    
    return head;
    
}


int length(Node *head) {
   
    if(head==NULL)
        return 0;
    int ans=length(head->next);
    return ans+1;
    
}

void print(Node *head)
{
	Node *temp = head;
	while(temp != NULL)
	{
		cout<<head -> data<<endl;
		head = head -> next;
	}
}

int main()
{
	Node *head = take_input2();
	print(head);

	int i,data;
	cin>>i;

	head = deleteNodeRec(head, i );
	
	print(head);
	
}
