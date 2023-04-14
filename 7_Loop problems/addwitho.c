#include<stdio.h>

int main(){


    int a,b;
    printf("Enter a number a and b\n");
    scanf("%d %d",&a, &b);

    while(b!=0){
        a++;
        b--;
    }
    printf("%d\n",a);
return 0;
}