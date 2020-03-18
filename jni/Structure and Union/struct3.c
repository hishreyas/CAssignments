<<<<<<< HEAD
#include<stdio.h>
typedef struct student
{
    char name[20];
    int rollno;
}STUDENT;
void main()
{
    STUDENT s1;
    printf("enter name:");
    scanf("%s",&s1.name);
    printf("enter rollno:");
    scanf("%d",&s1.rollno);
    display(s1);
}
void display(struct student s1)
{
    printf("name=%s\n",s1.name);
    printf("rollno=%d\n",s1.rollno);
}
=======
/*write a program to create student sturcture having fields rollno,name.Accept details of a student 
and write function to display the details.*/
#include<stdio.h>

typedef struct student
{
    char name[20];
    int rollno;
}STUDENT;
void main()
{
    STUDENT s1;
    printf("\nenter name:");
    scanf("%s",&s1.name);
    printf("\nenter rollno:");
    scanf("%d",&s1.rollno);
    display(s1);
}
void display(STUDENT s1)
{
    printf("name=%s\n",s1.name);
    printf("rollno=%d\n",s1.rollno);
}
>>>>>>> 450f98a80b62e52e6ce74352d98ae0c5adbc94e5
