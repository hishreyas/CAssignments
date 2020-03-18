#include<Stdio.h>
typedef struct person
{
    char name[20];
    char address[100];

}PERSON;

    typedef struct birthdate
    {
        int date;
        int month;
        int year;

    }BIRTHDATE;



void main()
{
    int n,i;
    struct person p[100];
    struct birthdate b[100];
    printf("enter how many people ?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter information of student\n",i+1);
        printf("enter name\n");
        scanf("%s",&p[i].name);
        printf("enter address\n");
        scanf("%s",&p[i].address);
        printf("enter date month year \n");
         scanf("%d%d%d",&b[i].date,&b[i].month,&b[i].year);


        printf(".............Entered details...............\n");
        printf("name=%s\n",p[i].name);
         printf("address=%s\n",p[i].address);
          printf("birthdate=%d/%d/%d\n",b[i].date,b[i].month,b[i].year);
    }
}
