/*write a C program to accept and display a matrix of order n×n.use dynamic memory allocation.also Calucate Sum of diagonal elements*/
//comments are only for understanding don't need to write
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,j,sum=0;
    int **matrix;
    puts("Enter n row or n column"); // n×n i.e row=col;
    
    scanf("%d",&n);
    //memory allocating for rows
    matrix=(int **)calloc(n,sizeof(int));
    
    //memory allocating for column row wise
    for(i=0;i<n;i++)
    matrix[i]=(int *)calloc(n,sizeof(int));
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter %d row %d column element\n",i+1,j+1);
            scanf("%d",&matrix[i][j]);
            
            if(i==j) //diagonal element
            sum+=matrix[i][j];
        }
       
    }
    //displaying matrix
    
    puts("Entered Matrix :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf(" | %d",matrix[i][j]);
        
        printf(" |\n");
       
    }
    printf("Sum of Diagonal elements=%d",sum);
    free(matrix);
    
    
}
