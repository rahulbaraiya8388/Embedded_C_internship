#include<stdio.h>

int add(int,int);

int main(){

    int total,a=10,b=30;

    total=add(a,b);
    printf("%d\n",total);
    return 0;
}

int add(int m ,int v){
    int sum;

    sum=m+v;
    return(sum);

}