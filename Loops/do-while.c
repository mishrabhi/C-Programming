/* Syntax:

do {
    //code to be executed
} while(condition)

*/

#include<stdio.h>

int main()
{
    int num, i=0;
    printf("Enter a number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", i);
        i = i+1;
    } while(i<num);

    return 0; 
}


/* Output:
If we enter the number 10, then it will print like:
0
1
2
3
4
5
6
7
8
9
*/
