# include<stdio.h>

int main (){
    
    float var1 = 3.141592653589793238;
    double var2 = 3.141592653589793238;
    long double var3 =3.14159265358979323824654484545;

    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
    printf("%.16f\n",var1);
    printf("%.16f\n",var2);
    printf("%.21Lf\n",var3);


    return 0;
}