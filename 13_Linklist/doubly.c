#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void linktravese(struct Node *ptr){

     while (ptr != NULL)
    {
        // count++;
        printf("%d\n", ptr->data);
        ptr = ptr->next;

    }
    
    

} 



int main()
{

    // Allocate memory
    struct Node *N1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N3 = (struct Node *)malloc(sizeof(struct Node));

    // Link first Node

    N1->prev = NULL;
    N1->data = 1;
    N1->next = N2;
    // Link second Node

    N2->prev = N1;
    N2->data = 2;
    N2->next = N3;

    // Link third Node

    N3->prev = N2;
    N3->data = 3;
    N3->next = NULL;

    linktravese(N1);

    return 0;
}