#include<stdio.h>

int square(int);

int main(){

    int a=20,s;

    s= square(a);
    printf("%d\n",s);
    return 0 ;
}

int square(int a){

    int sa;

    sa=(a*a);
    return(sa);


}
