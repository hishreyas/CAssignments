/* write c program that accept a string and character to search .the program will call function which will search
for position of occurrence of character in string and return its position .function should return -1 if character is not found in string*/

#include<stdio.h>
#include<string.h>

int search(char *str,char c)
{
	char *occur;
	
	occur=strchr(str,c);
	
	if(occur!='\0') //returns null if not found
		return (occur - str); //differencing of pointers
	else
		return -1;
}

int main()
{
	char str[100],c;
	int position;
	
	puts("Enter  a String");
	gets(str);
	
	puts("Enter Character to Search in String");
	scanf("%c",&c);
	position=search(str,c);
	
	if(position!=-1)
		printf("Character Found at %d",position); //array start from position zero.you can add 1 in position to get user friendly output
	else
		printf("Character Not Found");
		
		return 0;
}
