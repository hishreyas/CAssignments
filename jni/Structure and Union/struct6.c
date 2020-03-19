/*Program to accprajwalept name roll no and marks of three subject and calculate percentage for three subjects*/
#include<stdio.h>
typedef struct student
{
    char name[20];
    int rollno;
    float marks1;
    float marks2;
    float marks3;
}STUDENT;

void main()
{
    struct student s;
    float total,percentage;
    printf("enter name:\n");
    scanf("%s",&s.name);
    printf("enter student rollno:\n");
    scanf("%d",&s.rollno);
    printf("enter marks for 1 subject:\n");
    scanf("%f",&s.marks1);
     printf("enter marks for 2 subject:\n");
     scanf("%f",&s.marks2);
      printf("enter marks for 3 subject:\n");
      scanf("%f",&s.marks3);

      printf("-------entered details are-------\n");
      printf("name is:%s\n",s.name);
      printf("roll no is:%d\n",s.rollno);
      total=s.marks1+s.marks2+s.marks3;
      percentage=(total/300)*100;
      printf("the total marks are:%f\n",total);
      printf("percentage obtained is:%f\n",percentage);
}
