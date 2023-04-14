#include<stdio.h>

    int main()
{

    int a[10], b, sum = 0,count=0,avg;
    printf("Enter a 10 number");
    for (b = 0; b < 10; b++)
    {
        printf("\n Enter a number %d ", b);
        scanf("%d", &a[b]);
    }

    for(b=0;b<=9;b++){
        sum=sum+(a[b]);
        count ++;
    }
    avg=sum/count;

    printf("sum of all number%d  Avrage is %d",sum,avg);

    return 0;
}