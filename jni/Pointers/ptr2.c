//Write Program to interchange two numbers using pointer
#include<stdio.h>
#include<string.h>

void swap(int *a,int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
	/*
	without using temp variable
	*a^*b;
	*b^*a;
	*a^*b;
	*/
}
int main()
{
	int a,b;
	
	puts("Enter Two Numbers");
	scanf("%d%d",&a,&b);
	
	printf("before swaping in main() a=%d b=%d",a,b);
	swap(&a,&b);
	printf("after swaping in swap() a=%d b=%d",a,b);
	
	return 0;
}
