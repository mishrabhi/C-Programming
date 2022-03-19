/*Take input from the user and ask user to take 0 for triangular star pattern and 1 for reversed triangular star pattern.
Triangular star Pattern:
*
**
***
****
***** 


Reverse Triangular Star Pattern:
*****
****
***
**
*

  */


 #include<stdio.h>

void starPattern(int rows)
{
    for(int i = 0; i< rows; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

 int main()
 {
     int rows;
     printf("How many rows you want?\n");
     scanf("%d", &rows);
     starPattern(rows);
     return 0;
 }


 /* Output:
 How many rows you want?
 5
 *
 **
 ***
 ****
 *****

 */





//Reverse Star Pattern:

#include<stdio.h>

void reverseStarPattern(int rows)
{
    for(int i=0; i < rows; i++)
    {
        for(int j = 0; j <= rows-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("How many rows you want?\n");
    scanf("%d", &rows);
    reverseStarPattern(rows);
    return 0;
}


/* Output:
How many rows you want?
5
*****
****
***
**
*

*/

