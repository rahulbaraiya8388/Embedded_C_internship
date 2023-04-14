#include<stdio.h>

int main(){

    int n;
    printf("Enter a first number:\n");
    scanf("%d",&n);
    
    while (n!=0)
    {
        /* code */
        if(n<0){
            break;
   
        }
        printf("Enter a number\n");
        scanf("%d",&n);

    }
    printf("break work and you out to loop\n");
    
    
    return 0;
}