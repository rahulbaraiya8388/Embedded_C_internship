# include<stdio.h>

struct {
    char *engine;

} car1,car2;

int main (){



    car1.engine= "DDi 190";
    car2.engine="1.2L kapa";
    printf("%s\n",car1.engine);
    printf("%s",car2.engine);
    
    return 0;
}