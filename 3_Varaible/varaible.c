// use of "sizeof " operator 

#include<stdio.h>
#include<limits.h>

int main (){
    
    // printf("%d", sizeof( long int));
    // int var1 =INT_MIN;
    // int var2 =INT_MAX;
    // int var3 = 0;
    // int var4 =UINT_MAX;
    // printf("range of singed integer is form: %d to %d \n",var1,var2 );
    // printf("range of unsinged integer is form: %u to %u ",var3,var4);

    // short int var1 =SHRT_MIN;
    // short int var2 = SHRT_MAX;
    // printf("range of short singed integer is form: %d to %d \n",var1,var2 );

    
   unsigned short int var1 =0;
   unsigned short int var2 = USHRT_MAX;
    printf("range of short singed integer is form: %u to %u \n",var1,var2 );

    return 0;
}