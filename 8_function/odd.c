// Even and odd
#include<stdio.h>

int checkevernodd(int n){
    int check;
    check= (n& 1);
    return(check);
}

int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if (checkevernodd(n))
    {
        printf("Number is odd:\n");
    }
    else{
        printf("Number is even:\n");
    }
    return 0;
}