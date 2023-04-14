#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


struct Node *firstinsert(struct Node *head,int data){

    struct Node *ptr;

    ptr=(struct Node*)malloc(sizeof(struct Node));

    ptr->next=head;
    ptr->data=data;
    head=ptr;
    return (head);
}


struct Node *Endinsert(struct Node*head,int data){

    
    struct Node *ptr;

   
    ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;

    while (p->next!=NULL)
    {
        p=p->next;
    }

    p->next=ptr;
    ptr->next=NULL;
    ptr->data=data;
    
    return(head);
}


struct Node *Afterindex(struct Node*head,int data,int index){

    
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
   int i=0;

    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    
    return(head);
}

struct Node *AfterNode(struct Node*head,struct Node *previous,int data){

    
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=previous->next;
    previous->next=ptr;
    ptr->data=data;
    
    return(head);
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

    head->data = 7;
    head->next = second;

    // link second  and third node

    second->data = 15;
    second->next = third;

    // Terminate list and third node

    third->data = 25;
    third->next = forth;

     // Terminate list and third node
    forth->data = 35;
    forth->next = NULL;


   
    //head = insertindex(head, 56,2);
  //  head = insertend(head,65);
    // head = insertAfternode(head,second,75);
    linktravse(head);
    printf("After insersation\n");
    // head=firstinsert(head,52);
    // head=Endinsert(head,53);
    // head=Afterindex(head,54,3);
    head=AfterNode(head,third,56);


    linktravse(head);
    

    return 0;
}