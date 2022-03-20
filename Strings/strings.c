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



//String Functions:

#include<stdio.h>

int main()
{
   char s1[]= "Abhishek";
   char s2[]= "Raja";
   puts(strcat(s1,s2));       //AbhishekRaja
   printf("The length of s1 is %d\n", strlen(s1));   // 8
   printf("The reversed string s1 is: ");
   puts(strrev(s1));       // kehsihbA
   



   return 0;

}