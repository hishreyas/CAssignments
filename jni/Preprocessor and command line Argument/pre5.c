#include<stdio.h>
#include<string.h>
char* reversestring(char str[])
{
    int n=strlen(str);
    int i;
    char temp;
    for(i=0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    return str;
}
int main(int argc,char *argv[])
{
    if(argc==1)
    {
       puts("no command line argument is found");
    }
    else
    {
    printf("%s\n",argv[1]);
    reversestring(argv[1]);
    printf("%s",(argv[1]));
        
        }
 
}
