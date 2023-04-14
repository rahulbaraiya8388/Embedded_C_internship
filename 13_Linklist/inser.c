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
//case 1
struct Node *insertfirst(struct Node *head, int data)
{

    struct Node *ptr;

    ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->next = head;
    ptr->data = data;
}

//case 4
struct Node *insertAfternode(struct Node *head,struct Node *privoes, int data)
{

    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->next=privoes->next;
    privoes->next=ptr;
    ptr->data = data;
    return head;

}
//case 3
struct Node *insertend(struct Node *head, int data){
  
    struct Node *ptr;
    
    
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head; 

    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->data=data;
    return head;

}

//case 2
struct Node *insertindex(struct Node *head, int data, int index) {
    struct Node *ptr;
    ptr = malloc(sizeof(struct Node));

    struct Node *p=head;

    int i=0;

    while (i!=index-1)
    {
        p=p->next;
        i++;}
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;

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


   
    //head = insertindex(head, 56,2);
  //  head = insertend(head,65);
    // head = insertAfternode(head,second,75);
    head=insertfirst(head,52);
    linktravse(head);
    

    return 0;
}