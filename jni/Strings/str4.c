/* write user defined function to calculate the length of string.use this function in main*/

#include<stdio.h>
#include<string.h>

int length(char *str)
{
	int i=0;
	
	for(i=0;*(str+i)!='\0';i++)
	; //empty statement
	
	return i;
}

int main()
{
	char str[100];
	
	puts("Enter  a String");
	gets(str);
	
	printf("Length of Entered String : %d",length(str));

}
