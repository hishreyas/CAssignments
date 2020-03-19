/*write a c program to accept names of n cities and search for city named "pune"*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[20][100];
	int n,i,position='\0';
    
	puts("Enter number of cities you want to enter");
	scanf("%d",&n);
    getchar();
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d city\n",i+1);
		gets(s[i]);
		
		if(!strcmp("Pune",s[i]))
			position=i;
	}
	if(position!='\0')
		printf("\n  City Pune Found at position %d",position);
	else
		puts("City Pune Not Found");
		
		return 0;
		
 }	

