#include<stdio.h>

int main(){

    int i, reminder,sum=0,n,q ,fact=1;
    printf("Enter three digit number:\n");
    scanf("%d",&n);


    q=n;
    while (q!=0)
    { reminder=q%10;

        for(i=1;i<=reminder;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
        q=q/10;     
    }
    if (sum==n)
    {
        printf("%d is strong number\n",n);
    }
    else{
        printf("This number is not a strong number\n");
    }
   
    
    


    return 0;
}

