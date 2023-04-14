#include<stdio.h>

#define MAX 50


int main(){
    int a[MAX][MAX],b[MAX][MAX],result[MAX][MAX];
    int arow,acolumns,brow,bcolumns;

    printf("Enter the row and columns matrix A:\n");
    scanf("%d %d",&arow,&acolumns);

    printf("Enter the elment of matrix a:");
    int i,j,k;
    for(i=0;i<arow;i++){
        for(j=0;j<acolumns;j++){
            scanf("%d %d",&a[i][j]);

        }

    }


}