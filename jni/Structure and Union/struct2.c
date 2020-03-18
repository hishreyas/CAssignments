/* write a program to declare a structure person(name,address)which contain another structure
brithdate(day,month,year).Accept details of n person and display them*/

#include<stdio.h>

typedef struct birthdate
 {
        int date;
        int month;
        int year;
		
 }BIRTHDATE;

typedef struct person
{
    char name[20];
    char address[100];
	BIRTHDATE dob;

}PERSON;

int main()
{
    int n,i;
    PERSON p[100];
    printf("enter how many people ?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter information of person %d\n",i+1);
        printf("enter name\n");
        scanf("%s",&p[i].name);
        printf("enter address\n");
        scanf("%s",&p[i].address);
        printf("enter date month year \n");
        scanf("%d%d%d",&p[i].dob.date,&p[i].dob.month,&p[i].dob.year);


        printf(".............Entered details...............\n");
        printf("name=%s\n",p[i].name);
        printf("address=%s\n",p[i].address);
        printf("birthdate=%d/%d/%d\n",p[i].dob.date,p[i].dob.month,p[i].dob.year);
    }
    return 0;
}
