#include <stdio.h>
#include <stdlib.h>

typedef union 
{
    char a[4];
    unsigned int b;
} data;

int main()
{
    data Test;
    Test.b='ABCD';
    for(int i=0; i<4; i++){
        printf("Test.a[%d] = %x\n",i,Test.a[i]);
        printf("Test.a[%d] adress is %p\n",i,&Test.a[i]);
    }
    printf("Test.b= %x\n",Test.b);
    printf("Test.b adress is %p\n",&Test.b);
    return 0;
}