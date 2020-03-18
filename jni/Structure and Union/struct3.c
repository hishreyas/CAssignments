/*write a program to create student structure having field rollno,name,Accept details of one student
and write function to display the details*/

#include<stdio.h>
typedef struct student
{
    char name[20];
    int rollno;
}student;

void main()
{
    student s1;
    printf("enter name:");
    scanf("%s",&s1.name);
    printf("enter rollno:");
    scanf("%d",&s1.rollno);
    display(s1);
}
void display(student s1)
{
    printf("name=%s\n",s1.name);
    printf("rollno=%d\n",s1.rollno);
}

