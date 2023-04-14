// fined minimum number
#include <stdio.h>

int main()
{

    int a[10], b, min;
    printf("Enter a 10 number");
    for (b = 0; b < 10; b++)
    {
        printf("\n Enter a number %d ", b);
        scanf("%d", &a[b]);
    }
    min = a[0];
    for (b = 0; b < 10; b++)
    {
        if (a[b] < min)
        {
            min = a[b];
        }
    }
    printf("minimum number is %d", min);

    return 0;
}