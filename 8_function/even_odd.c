#include<stdio.h>

void checkevenodd(int a){

    if(a%2==0){
        printf("Number is even ");
    }else{
        printf("Number is odd");
    }
}
int main(){
    int n;
    printf("Entre a number \n");
    scanf("%d",&n);
    checkevenodd(n);

    return 0;
}