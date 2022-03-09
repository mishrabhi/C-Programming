/*
Syntax:

for(Expression1;Expression 2;Expression3){
    //code to be executed
}
*/

/* Properties of Expression1:
=> The expression represents the initialisation of loop variable.
=> We can initialize more than 1 variable in Expression1.
=> Expression1 is optional.


Propertiez of Expression2:
=> It is a conditional expression.It checks for a specific condition to be satisfied.
=> It can have more than 1 condition. However, the loop will iterate until the last condition become false.


Properties of Expression 3:
=> Expression 3 is used to update the loop variable.
=> We can update more than one variable at the same time.
=> Expression 3 is optional
*/




#include<stdio.h>

int main()
{
    int i;
    for(i=0; i<5; i++);
    {
    printf("%d\n", i);
    }

    return 0;

}

/* Output:
0
1
2
3
4
*/

#include<stdio.h>

int main()
{
    int i, j;
    for(i=0,j=0; i<5; i++);
    {
        printf("%d %d\n", i , j);
    }

    return 0;
}


/* Output
0 0
1 0
2 0
3 0
4 0
*/


#include<stdio.h>

int main()
{
    int i, j;
    for(i=0,j=0; i<5, j<3; i++);    // It takes last conditional statement as loop termination.
    {
        printf("%d %d\n", i , j);
        j++;
    }

    return 0;
}

/* Output:
0 0
1 1
2 2
*/