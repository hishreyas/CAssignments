/*write a c program to accept student details of n students(rollno,name,percentage) using structure.
display details of the student having maximum percentage*/

#include <stdio.h>
typedef struct student
{
	char name[50];
	int roll;
	float marks;
} student;

void bubbleSortDesc(student stud_list[100], int s)
{
	int i, j;
	student temp;
	
	for (i = 0; i < s - 1; i++)
	{
		for (j = 0; j < (s - 1-i); j++)
		{
			if (stud_list[j].marks < stud_list[j + 1].marks) // descending order of their marks
				{
					temp = stud_list[j];
					stud_list[j] = stud_list[j + 1];
					stud_list[j + 1] = temp;
				}
         }
    }
}

int main()
{
	int i,n;
	student s[100];
	
	printf("Enter total of students:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter information of student %d:\n",i+1);
		printf("Enter name: ");
		scanf("%s", s[i].name);
		printf("Enter roll number: ");
		scanf("%d", &s[i].roll);
		printf("Enter marks: ");
		scanf("%f", &s[i].marks);
		
	}
	
	bubbleSortDesc(s, n);
	
	printf("Displaying Information:\n");
	printf("\t Name \t roll-no \t marks\n");
	
	for(i=0;i<n;i++)
	{
		printf("\t %s \t %d \t %.1f \n",s[i].name,s[i].roll,s[i].marks);
		
	}
	
	return 0;
}

 
