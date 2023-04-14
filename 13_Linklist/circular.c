#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linklisttraversal(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        printf("Elemernt is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertfirst(struct Node *head, int data)
{

    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while (p->next!=head)
    {
        p =p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head=ptr;
    return (head);
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory node

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // link fist and second

    head->data = 5;
    head->next = second;

    // link second  and third node

    second->data = 10;
    second->next = third;

    // link third and head

    third->data = 20;
    third->next = head;
// Befor insert
    linklisttraversal(head);
// After insert
printf("After insert\n");
head=insertfirst(head,55);
head=insertfirst(head,56);

 linklisttraversal(head);

    return 0;
}