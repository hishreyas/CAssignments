/*write a c program to accept names of n cities and find the name of city having maximum character*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[20][100];
	int n,i,position=0,max=0;
	puts("Enter number of cities you want to enter");
	scanf("%d",&n);
    getchar();
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d city\n",i+1);
		gets(s[i]);
		
		if(strlen(s[i])>max)
		{
			max=strlen(s[i]);
			position=i;
		}
			
	}
	
	 printf("\n  City: %s length: %d",s[position],strlen(s[position]));
	 
	 return 0;
}
