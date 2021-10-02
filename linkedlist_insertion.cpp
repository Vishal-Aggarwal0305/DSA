// c++ code to insert a node after a given position in linked list

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

Node *push_at(Node *head, int newElement, int position)
{
    Node *newNode = new Node(newElement);
    newNode->data = newElement;
    newNode->next = NULL;

    if (position < 1)
    {
        cout << "\nposition should be >= 1.";
    }
    else if (position == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {

        Node *temp = head;
        for (int i = 1; i < position - 1; i++)
        {
            if (temp != NULL)
            {
                temp = temp->next;
            }
        }

        if (temp != NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else
        {
            cout << "\nThe previous node is null.\n";
        }
    }

    return head;
}
 


void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    cout << "Enter the elements you want to print in the linked list . Press -1 to end the list : " <<endl ;
    Node *head = takeinput();
    display(head);
    int n;
    cout << "Enter the position to insert : ";
    cin >> n;

    head = push_at(head, 13, n+1);

    display(head);
    
    return 0;
}