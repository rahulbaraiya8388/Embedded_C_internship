#include<stdio.h>

int main(){
    int year;
    printf("Enter a year :\n");
    scanf("%d",&year);

    if(year%400==0){
        printf("%d is leap year",year);
    }else if (year%100==0)
    {
        printf("%d year is not leap year",year);
    }else if (year%4==0)
    {
        printf("Year is leap year");
    }else {
        printf("year is not leap year");
    }
    return 0;
    
}