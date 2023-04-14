//sum of Row and collums
#include<stdio.h>

int main(){

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int i,j,sum;
    //Row sum

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=a[i][j];
          
        }
        printf("%d ",sum);
        sum=0;
    }
    //column

     for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            sum+=a[i][j];
          
        }
        printf("\n%d ",sum);
        sum=0;
    }

    return 0;
   




}


