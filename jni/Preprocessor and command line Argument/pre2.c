#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX(a,b) a>b?a:b
#define MAXX(a,b,c) MAX(MAX(a,b),c)
int main(int argc,char* argv[])
{
    if(argc!=4)
    {
        puts("no command line found");
        
    }
    
    printf("MAXIMUM NUMBER %d",MAXX(atoi(argv[1]),atoi(argv[2]),atoi(argv[3])));
}