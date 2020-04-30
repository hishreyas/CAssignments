#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
    if(argc!=3)
    {
        puts("no command line argument found");
    }
    int sum;
    sum=atoi(argv[1])+atoi(argv[2]);
    
    
        printf("%d",sum);
    
        
    return 0;
}