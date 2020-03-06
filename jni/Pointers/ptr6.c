//Write a program to sum of all numbers in an array using pointer

#include<stdio.h>
#include<string.h>

int getSum(int *base,int size)
{
	int i,sum=0;
	
	for(i=0;i<size;i++)
	{
		sum+=*(base+i);
	}
	return sum;
}

int main()
{
	int num[100];
	int i,size;
	
	puts("Enter Number of Elements");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter %d Element\n",i+1);
		scanf("%d",&num[i]);
	}
	
	printf("Sum of Numbers in Array is %d",getSum(num,size));
	
	return 0;
}
