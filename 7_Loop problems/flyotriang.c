#include<stdio.h>



int main(){

    int v=1,n,i,j;
    printf("Enter the number of row\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",v);
            v++;
        }
        printf("\n");
    }



    return 0;
}