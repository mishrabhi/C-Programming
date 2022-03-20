// Printing a string:

#include<stdio.h>

void printstr(char str[])
{
    int i;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    char str[] = {'a', 'b', 'h', 'i', 's', 'h', 'e', 'k', '\0'};
    printstr(str);
    return 0;
}


/* Output:
abhishek

*/