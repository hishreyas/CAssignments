 // Write program to display elements of an Array using pointer
 
#include<stdio.h>
#include<string.h>

void printArray(int *base,int size)
{
	int i;
	
	for(i=0;i<size;i++)
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
	
	printArray(num,size);
	
	return 0;
}
