#include<stdio.h>

int main()
{
    int a=10;
    int* ptra = &a;

    printf("The value of a is %d\n", a);   //10
    printf("The value of a is %d\n", *ptra);  //10
    printf("The adrress of a is %x\n", ptra);  // address of a is 61fed8
    
    return 0;
}