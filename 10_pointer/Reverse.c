#include<stdio.h>
#define N 5

int main(){

    int a[N];
    int *p;
    printf("Enter %d Elemernt:\n",N);
    for(p=a;p<=a+N-1;p++){
        scanf("%d",p);
       
    }
    printf("Element in revrese order:\n");
    for(p=a+N-1;p>=a;p--){
        printf("%d ",*p);
    }
     

return 0;
}