// Array Reversal in C:



#include<stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for(int i = 0; i < 7/2; i++)
    {
    //swap item arr[i] with arr[6-i]
    temp = arr[i];
    arr[i] = arr[6-i];
    arr[6-i] = temp;
    }    

}

int main()
{
    int arr[]= { 1,4,6,13,24,38,44};
    printf("Before reversing the array\n");
    for(int i=0; i<7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
    arrayRev(arr);
    printf("After reversing array\n");
    for( int i = 0; i<7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
    return 0;
}


/* Output:
Before reversing Array:

The value of element 0 is 1
The value of element 1 is 4
The value of element 2 is 6
The value of element 3 is 13
The value of element 4 is 24
The value of element 5 is 38
The value of element 6 is 44

After Reversing:

The value of element 0 is 44
The value of element 1 is 38
The value of element 2 is 24
The value of element 3 is 13
The value of element 4 is 6
The value of element 5 is 4
The value of element 6 is 1


*/





