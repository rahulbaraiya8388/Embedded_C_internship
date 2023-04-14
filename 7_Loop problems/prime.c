#include<stdio.h>

int main(){


    int n,i,count=0;

    printf("Enter three digit number:\n");
    scanf("%d",&n);

    for(i=1;i<=n; i++){

        if(n%i==0){
            count ++;
        }
        
    }
    if(count==2){
            printf("Number is Prime\n");
        }else{
            printf("Number is not a prime\n");
        }



return 0;

}