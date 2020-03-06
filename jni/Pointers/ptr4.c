// Write Program in C to display the contents of array in reverse order using pointer.

#include<stdio.h>
#include<string.h>

void printReverse(int *base,int size)
{
	int i;
	
	for(i=size-1;i>=0;i--)
	{
		printf("%d\t",*(base+i));
	}
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
	
	printReverse(num,size);
	
	return 0;
}
