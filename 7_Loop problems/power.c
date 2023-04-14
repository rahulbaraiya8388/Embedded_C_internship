#include<stdio.h>

int main(){

    int power=1,base,p,i,n;
    printf("Enter a power value:\n");
    scanf("%d",&p);
    printf("Enter a Base value:\n");
    scanf("%d",&base);

    n=p;

    for(i=1;i<=n;i++){
        power=power*base;
    }printf("%d two the power of %d is %d  \n",p,base,power);

    return 0;
}