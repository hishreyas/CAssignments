#include<stdio.h>
#define MAX(a,b) a>b?a:b
#define MAXX(a,b,c) c>MAX(a,b)?c:MAX(a,b)
int main()
{
    int a=10,b=3,c=60;
    printf("%d\n",MAX(a,b));
    printf("%d",MAXX(a,b,c));
}