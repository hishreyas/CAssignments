// Write C program to Find Maximum of Two Numbers using Macro

#include<stdio.h>
#include<string.h>
#define MAX(a,b) (a>b)?a:b
int main()
{
	int a,b; //variables a,b
	
	puts("Enter Two Numbers");
	scanf("%d%d",&a,&b); // store the input a & b
	
	printf("Maximum of Two Number is %d",MAX(a,b)); // print max between a and b using macro function
	
	
	
	return 0;
}
