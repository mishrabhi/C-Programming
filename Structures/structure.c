# include<stdio.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[35];
};

int main()
{
    struct Student harry, ravi, om;
    harry.id = 1;
    ravi.id = 2;
    om.id = 3;
    harry.marks = 25;
    ravi.marks = 35;
    om.marks = 45;
    harry.fav_char = 'A';
    ravi.fav_char = 'A';
    om.fav_char = 'A';
    strcpy(harry.name, "Harry Ptter" );

    printf("Harry's id marks and fav_char is %d %d %c\n", harry.marks, harry.id, harry.fav_char);
    printf("Ravi's id marks and fav_char is %d %d %c\n", ravi.id, ravi.marks, ravi.fav_char);
    printf("Om's id marks and fav_char is %d %d %c\n", om.id, om.marks, om.fav_char);
    printf("Harry's full name is %s\n", harry.name);



    return 0;
}

/* Output:

Harry's id marks and fav_char is 25 1 A
Ravi's id marks and fav_char is 2 35 A
Om's id marks and fav_char is 3 45 A
Harry's full name is Harry Ptter

*/

