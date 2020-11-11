/*write c program to count the total number of words in string*/

#include<stdio.h>
#include<string.h>

int cword(char *str)
{
	char * temp=str;
	int count=0;
	
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
	char s[100]; //string variable
	
	puts("Enter a String");
	gets(s); //store input string in the variable s
	
	printf("\nNumber of Words in String :%d",cword(s)); //print the no of words in string
	
	return 0;//end program
	
}
