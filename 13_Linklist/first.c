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


   
    //head = insertindex(head, 56,2);
  //  head = insertend(head,65);
    // head = insertAfternode(head,second,75);
    linktravse(head);
    

    return 0;
}