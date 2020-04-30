#include<stdio.h>
#define MAX(a,b) a>b?a:b
#define MAXX(a,b,c) c>MAX(a,b)?c:MAX(a,b)
int main()
{
	int a,b,c;
	puts("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d is maximum of a&b\n %d is maximum of a,b,&c\n",MAX(a,b),MAXX(a,b,c)); 
	
}