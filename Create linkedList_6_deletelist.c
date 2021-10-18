#include <stdio.h>
#include <stdlib.h>

// A Linked List Node
struct Node
{
    int data;
    struct Node* next;
};

// Helper function to create a new node with the given data and
// pushes it onto the list's front
void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Recursive function to delete a linked list
void deleteList(struct Node** head)
{
    if (*head == NULL) {
        return;
    }

    if ((*head)->next) {
        deleteList(&((*head)->next));
    }

    printf("Deleting %d\n", (*head)->data);
    free(*head);

    *head = NULL;
}

int main(void)
{
    // input keys
    int keys[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(keys) / sizeof(keys[0]);

    // points to the head node of the linked list
    struct Node* head = NULL;

    // construct a linked list
    for (int i = n - 1; i >= 0; i--) {
        push(&head, keys[i]);
    }

    deleteList(&head);

    if (head == NULL) {
        printf("List deleted");
    }

    return 0;
}
