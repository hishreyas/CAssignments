/* write a c program to calculate length of string using standard library function.*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	
	puts("Enter  a String");
	
	gets(str);
	
	printf("Length of Entered String : %d",strlen(str));
	
	return 0;
	
}
