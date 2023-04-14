# include<stdio.h>

typedef struct car
{
    int fueltank;
    int setingcapacity;
    int citymilage;
}car_t;


int main (){

    car_t c[2];
    int i;

    for(i=0;i<2;i++){
        printf("Enter the  car fuel tank capacity%d\n",i+1);
        scanf("%d",&c[i].fueltank);
        printf("Enter the  car seating capacity%d\n",i+1);
        scanf("%d",&c[i].setingcapacity);
        printf("Enter the  car citymilage%d\n",i+1);
        scanf("%d",&c[i].citymilage);
        

    }printf("\n");

    for(i=0;i<2;i++){
        printf("\ncar %d detalis \n",i+1);
        printf("fuel tank capacity %d\n",c[i].fueltank);
        printf("seating capacity%d\n",c[i].setingcapacity);
        printf("city milage %d\n",c[i].citymilage);

        
    }
    
    return 0;
}