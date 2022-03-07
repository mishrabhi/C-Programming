#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    printf("You have entered %d as your age", age);
    if(age<=18){
        printf("You can vote!");
    }
    else if(age>10){
        printf("You are between 10 to 18 since you cannot vote!");
    }
    else{
        printf("You cannot vote!");
    }

    return 0;
}