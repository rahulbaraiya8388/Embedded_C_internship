#include<stdio.h>

int main(){

    int i;
    for(i=0;i<20;i++){
        switch (i)
        {
        case 0:i+=5;
        break;
        case 1:i+=2;
        break;
        case 5:i+=5;
        break;
           
        default:i+=4;
        
        }
        printf("%d ",i);
    }
    return 0;
}