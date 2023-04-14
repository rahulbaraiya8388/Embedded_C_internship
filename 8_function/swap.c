//Write a program in C to swap two numbers using function

#include<stdio.h>

void swap(int a,int b){
int tem;
    tem=a;
    a=b;
    b=tem;
    printf("a = %d  b = %d", a , b);
   
}

int main(){

    int a=5,b=6,s;

    swap(a,b);


}

