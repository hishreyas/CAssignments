/*write c programe to store and display the name,rollno,fees of a student using structure.pass the member of
structure variable to a function called display() to display the contents.*/

#include<stdio.h>
typedef struct student
{
    char name[20];
    int rollno;
    float fees;
}STUDENT;

void main()
{
    STUDENT s1;
    printf("Enter name\n");
    scanf("%s",&s1.name);
    printf("Eenter roll no\n");
    scanf("%d",&s1.rollno);
    printf("enter fees\n");
    scanf("%0.4f",&s1.fees);
    display(s1.name,s1.rollno,s1.fees);
}
   void display(char ch[],int n,float a)
{
    printf("name of the student=%s\n",ch);
    printf("roll no of student is =%d\n",n);
    printf("fees of student is =%0.4f\n",a);
    
}

#include<stdio.h>
typedef struct student
{
    char name[20];
    int rollno;
    float fees;
}STUDENT;

void main()
{
    STUDENT s1;
    printf("Enter name\n");
    scanf("%s",&s1.name);
    printf("Eenter roll no\n");
    scanf("%d",&s1.rollno);
    printf("enter fees\n");
    scanf("%0.4f",&s1.fees);
    display(s1.name,s1.rollno,s1.fees);
}
 void display(char ch[],int n,float a)
{
    printf("name of the student=%s\n",ch);
    printf("roll no of student is =%d\n",n);
    printf("fees of student is =%0.4f\n",a);
    
}
