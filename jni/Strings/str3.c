/* write a c program to count number of vowels and consonants in string.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>// used for isdigit() etc.

int main()
{
	char str[100];
	int i,vow=0,con=0;
	
	puts("Enter  a String");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(strchr("aeiouAEIOU",str[i]) != '\0') // if str[i] char is not  found in aeiouAEIOU strchr()  returns null character
			vow++;
		else if(!isdigit(str[i]) && !isspace(str[i]) && !ispunct(str[i])) //ispuct() for checking punctuation i.e $,@etc
			con++;
	}
	
	
	printf("\n No of Vowels :%d\n No of Consonants:%d\n",vow,con);
	
	return 0;
}

int display()
{
	printf("Numbers of Vowels :%d\n Numbers of Consonants:%d in given string\n",vow,con);
	
	return 0;

}
	
