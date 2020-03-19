/*write c program to accept a string and an index from user and display character at that specific 
index*/

#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	int index;
	
	puts("Enter a String");
	gets(s);
	
	puts("Enter Index i.e index starts from zero(0)");
	scanf("%d",&index);
	
	printf("Character at Index %d is %c",index,s[index]);
	
	return 0;
	
}
