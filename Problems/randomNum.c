// To take a random number between 0 to 100:

#include<stdio.h>
#include<string.h>
#include<time.h>

int main()
{
    srand(time(NULL));      //srand takes seed as an input and it is defined inside stlib.h
    printf("The random number between 0 to 100 is %d\n", rand()%100);
    return 0;
}


/* Output:
The random number between 0 to 100 is 3(It takes random variable everytime).

*/
