#include<stdio.h>

int main(){

    int N;
    int seen[10]={0};
    printf("Enter a Number\n");
    scanf("%d",&N);

    int rem;
    while (N>0)
    {
        rem=N%10;
        if (seen[rem]==1)
          break;
        {
          
        seen[rem]=1;
        N=N/10;
        }
        
    }

    if(N>0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;

}