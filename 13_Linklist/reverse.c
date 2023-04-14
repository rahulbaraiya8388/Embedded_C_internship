#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node*revrese(struct Node *head)
{

    struct Node *prev = NULL;
    struct Node *next = NULL;

    while (head != NULL)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}

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

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    // Allocate memory for node in linklist heap

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second node

    head->data = 10;
    head->next = second;

    // link second  and third node

    second->data = 15;
    second->next = third;

    // Liank third and forth node

    third->data = 25;
    third->next = forth;

    // Terminate list

    forth->data = 35;
    forth->next = NULL;

    // Before reverse
    linktravse(head);
    //After reverse
    printf("After reverse\n");
    head=revrese(head);
    linktravse(head);

    return 0;
}