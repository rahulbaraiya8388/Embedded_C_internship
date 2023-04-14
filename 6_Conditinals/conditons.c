// Write a C program to find maximum between three numbers.


# include<stdio.h>

int main (){

    int a=500,b=50,c=20;

    if (a>b && a>c){
        printf("%d is maximum",a);
    }
    if (b>a && b>c)
    {
        printf("%d is maximum",b);
    }
    if (c>a && c>b)
    {
        printf("%d is maximum",c);
    }
    
    
    return 0;
}
