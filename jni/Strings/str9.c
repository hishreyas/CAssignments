/*write c program to count the total number of words in string*/

#include<stdio.h>
#include<string.h>

int cword(char *str)
{
	char * temp=str;
	
	while(*temp!='\0')
	{
		if( *temp=='\n' || *temp==' ' || *temp==',' || *temp==';')
			count++;
			
			temp++;
	}
	return count;
}
int main()
{
	char s[100];
	int index;
	
	puts("Enter a String");
	gets(s);
	
	printf("\nNumber of Words in String :%d",cword(s));
	
	return 0;
	
}
