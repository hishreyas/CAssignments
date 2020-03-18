/*write program to allocate memory dynamically for n integers.accept elements and  calculate sum and average.Also Find Largest element*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void accept(int *ptr,int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
       printf("\nEnter %d element\n",i+1);
        scanf("%d",ptr+i);
    }
}
int sum(int *ptr,int n)
{
    int i;
    int total=0;;
    
    for(i=0;i<n;i++)
	  total+=*(ptr+i);
	 
    return total;
}
int max(int *ptr,int n)
{
    int i=0;
    int max=i;
    
    for(i=1;i<n;i++)
    {
       if(*(ptr+i)>max)
        max=i;
    }
	
    return max;
}

int main()
{
    int n;
    int *array;
    int total;
    int index;
    puts("Enter No of Elements");
    scanf("%d",&n);
    array=(int *)malloc(n*sizeof(int));
    accept(array,n);
    total=sum(array,n);
    index=max(array,n);
    printf("\nSum of Elements =%d\n",total);
    printf("\n Average of Elements=%f\n",(float)total/n);
    printf("Largest  Element=%d, value=%d",index+1,*(array+index));
    free(array);
	
	return 0;
}



