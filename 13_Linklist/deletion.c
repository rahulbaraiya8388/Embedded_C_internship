#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int count = 0;

void linktravse(struct Node *ptr)
{

    while (ptr != NULL)
    {
        // count++;
        printf("%d\n", ptr->data);
        ptr = ptr->next;

    } // printf("Number of node is :%d \n",count);
}

// Case 1 delete first node

struct Node *deletefirst(struct Node *head)
{

    struct Node *ptr = head;

    head = head->next;
    free(ptr);

    return head;
}

//Case 2 delete in between node
struct Node *deleteinbetween(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    int i = 0;
    for (i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
//Case 3 delete the  last node
struct Node *deleteilastNode(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    
    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next =NULL;
    free(q);
    return head;
}


//Case 4 delete with given value  node
struct Node *deleteAtvalue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    

    while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data==value)
    {
        p->next=q->next;
        free(q);

    }
    return head;
}


int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for node in linklist heap

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // link first and second node

    head->data = 7;
    head->next = second;

    // link second  and third node

    second->data = 15;
    second->next = third;

    // Terminate list and third node

    third->data = 25;
    third->next = NULL;

    // head = insertindex(head, 56,2);
    //  head = insertend(head,65);s
    // head = insertAfternode(head,second,75);

    // head=deletefirst(head);
    // head = deleteinbetween(head, 1);
    // head = deleteilastNode(head);
    head = deleteAtvalue(head,25);


    linktravse(head);

    return 0;
}