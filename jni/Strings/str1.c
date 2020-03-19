/* write a menu driven program to perform  the following operations on strings using standard
library functions:
1.Convert String to uppercase
2.Copy one String to another
3.Compare two strings
4.Concatenate two strings*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>// header file for exit() function
#include<ctype.h>// header file for toupper() function

char *strupr(char *str)
{
	char *temp=str;
	
	while(*temp!='\0')
	{
		*temp=(char)toupper(*temp);
		temp++;
	}
	return str;
}

int main()
{
	int choice,c=0;
	char s1[100];
	char s2[100];
	puts("Enter String 1");
	gets(s1);
	puts("Enter another String 2");
	gets(s2);
	
	while(c!=5)
	{
		puts("Enter Choice");
		puts("1.Convert String to uppercase");
		puts("2.Copy one String to another");
		puts("3.Compare two strings");
		puts("4.Concatenate two strings");
		puts("5.exit");
		
		scanf("%d",&choice);
		
		
		switch(choice)
		{
			case 1:
				
				printf("\n Converted String 1 to UpperCase : %s \n",strupr(s1));
				printf("\n Converted String 2 to UpperCase : %s \n",strupr(s2));
				
				break;
				
			case 2:
				
				strcpy(s1,s2);
				puts("Copied String 2 into String 1");
				printf("\nString 1 :%s\n",s1);
			
				break;
				
			case 3:
				
				if(!strcmp(s1,s2))
					puts("Entered Strings are Equal");
				
				else if(strcmp(s1,s2)<0)
					puts("String 1 is less than String 2");
					
				else
					puts("String 1 is greater than String 2");
					
				break;
				
			case 4:
				
				strcat(s1,s2);
				puts("String 2 Concatenated into String 1");
				printf("\nString 1 :%s\n",s1);
				
				break;
			case 5:
				exit(0);
			    break;
				
			default:
			    puts("Enter Vaild Choice");
			
		}
		c++;
	}
	
	return 0;
}

