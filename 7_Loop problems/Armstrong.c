#include<stdio.h>

int main(){

    int reminder,sum=0,n,q;
    printf("Enter three digit number:\n");
    scanf("%d",&n);
    q=n;


    while (n!=0)
    {
        reminder=n%10;
        sum=sum+(reminder*reminder*reminder);
        n=n/10;
    }
    if(q==sum){
        printf("is a ArmStrong number \n");
    }else{
        printf("Not ArmStrong number\n");
    }
    
 return 0;
    
}