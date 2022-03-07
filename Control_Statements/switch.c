#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d", &age);

    switch (age)
    {
        case 3:
        printf("The age is 3");
        break;

        case 13:
        printf("The age id 13");
        break;

        case 23:
        printf("The age is 23");
        break;

        default:
        printf("Age is not 3,13,23");
        break;
    }

    return 0;
}


/*Output:
If you enter your age 3 or 13 or 23 then-
it prints:
The age is 3   or
The age is 13   or
The age is 23

And if neither of the case matches then it went to the default and prints
Age is not 3,13,23
*/