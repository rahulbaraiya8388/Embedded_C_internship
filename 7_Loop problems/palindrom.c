#include<stdio.h>

int main(){

    int result,q,reminder,num;


    result=0;
    printf("Enter A number:\n");
    scanf("%d",&num);
    q=num;

    while (q!=0)
    {
        reminder=q%10;
        result= result*10+reminder;
        q=q/10;
       
    }
    if(num==result){
        printf("Its pailindrom\n");

    }else{
        printf("not pilindro\n");
    }
    


    return 0;
}