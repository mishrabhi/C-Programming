/* Call By Reference:
* The call by reference method of passing arguments to a function copies the address of the arguments into the formal parameters.


=> Write a program to swap two values:   */

#include<stdio.h>
//function definition to swap the values
void swap (int*x, int*y) {
    int temp;
    temp = *x;  //save the value at address x 
    *x = *y;    //put y into x 
    *y = temp;   //put temp into y
    return;
}
int main()
{
    int a = 34, b = 64;
    printf("%d and %d\n", a , b);
    swap(&a , &b);
    printf("%d and %d\n", a , b);
    return 0;
}



/* Output:

34 and 64
64 and 34
*/












