# include<stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main(){
    int a,b; int c;
    a = 19;
    b = 22;
    c = sum(a,b);
    printf("The sum is %d \n", c);
    return 0;
}