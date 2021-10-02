//c++ code to count the number of nodes with a particular element 

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
            // OR
            // tail = newNode;
        }

        cin >> data;
    }
    return head;
}

int count(Node* head, int search_for)
{


Node* current = head;

    int count = 0;
    while (current != NULL) {
        if (current->data == search_for)
            count++;
        current = current->next;
    }
    return count;
}

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data  << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << " Total number of 10 in the list is :  " << count(head ,10) ;
  
}

int main()
{
    cout << "Enter the elements you want to print in the linked list . Press -1 to end the list : " << endl;
    Node *head = takeinput();
    display(head) ;

    return 0;
}