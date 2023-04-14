#include <stdio.h>
void minmax(int arr[], int len, int *min, int *max)
{

    *min = *max = arr[0];
    int i;

    for (i = 1; i < len; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}
 int main(){
    int a[]={23,4,21,98,987,45,322,1000,5,4,6,50};
    int len=(sizeof(a))/(sizeof(a[0]));
    int min,max;
    minmax(a,len,&min,&max);
    printf("%d %d",min,max);
       return 0;
}
 