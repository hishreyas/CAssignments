/* Write Function which accepts a number and three flag as parameters if number is even then set first Flag to
1.If Number is prime set set second Flag to 1 and if number is divisible by 3 or 7 set third Flag to 1 (Pass 
addresses of Flag to Function
*/

#include<stdio.h>
#include<string.h>

int isprime(int num)
{
	int i;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	
	return 1;
}

void setFlag(int num,int * f1,int * f2,int *f3)
{
	if(num%2==0)
		*f1=1;
		
	if(isprime(num))
		*f2=1;
	
	if(num%3==0 || num%7==0)
		*f3=1;
	
}
int main()
{
	int num;
	int flag1=0,flag2=0,flag3=0;
	
	puts("Enter Number");
	scanf("%d",&a);
	setFlag(a,&flag1,&flag2,&flag3);
	
	printf("\nFLAG 1=%d\nFLAG 2=%d\nFLAG 3=%d\n",flag1,flag2,flag3);
	
	
	
	return 0;
}
