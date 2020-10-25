/*write program to allocate memory dynamically for n integers.accept elements and  calculate sum and average*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void accept(int *ptr,int n) /*accept function for a accepting integer*/
{
    int i;
    
    for(i=0;i<n;i++)
    {
       printf("\nEnter %d element\n",i+1);
       scanf("%d",ptr+i);
    }
}
int sum(int *ptr,int n) /* sum function for calculating sum of n integers*/
{
    int i;
    int total=0;;
    
    for(i=0;i<n;i++)
    {
       total+=*(ptr+i);
    }
    return total;
    
}
int main()
{
    int n;
    int *array;
    int total;
    puts("Enter No of Elements");
    scanf("%d",&n);
    array=(int *)malloc(n*sizeof(int));/* allocating n integer dynamically*/
    accept(array,n);
    total=sum(array,n);
    printf("\nSum of Elements =%d\n",total);
    printf("\n Average of Elements=%f\n",(float)total/n); /* float typecast is used here*/
    free(array); /* free memory space*/
	
	return 0;
}



