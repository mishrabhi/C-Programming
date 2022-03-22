/* Check whether the number is palindrom??

 121 => 121 (Palindrome Number)
 343 => 343 (Palindrome Number)

 */

#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    int reversed = 0;
    int originalNum = num;

    //Lets Reverse the number
    while(num != 0)
    {
        reversed = reversed*10 + num % 10;
        num = num / 10;
    }

printf("The reversed number is %d\n", reversed);

if (num == reversed)
{
    return 1;
}
else
{
    return 0;
}
}

int main()
{
    int number;
    printf("Enter a number to check whether it is palindrome or not \n");
    scanf("%d", &number);

    if (isPalindrome(number)){
        printf("This number is palindrome\n");
    }
    else{
        printf("This number is not palindrome\n");
    }
    return 0;
}