#include<stdio.h>
int main(){
    

    int x,y;
    printf("Enter a number a and b\n");
    scanf("%d %d",&x, &y);

    if(y>0){
        while (y!=0)
        {
            x++;
            y--;
           
        }
         printf("%d sum of  number is \n",x);
    }  else if (y<0)
    {
        while (y!=0)
        {
            x--;
            y++;
            
        }
        printf("%d sum of  number is \n",x);
        
        
    }
    return 0;
}