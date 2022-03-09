/* Syntax:
 while(condition){
     //code to be executed
 }
 */

#include<stdio.h>

int main()
{
    int i = 55;
    while(i<55);
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}


/* Output:
0
1
2
3
4
.
.
.
.
54
*/