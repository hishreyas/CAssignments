/*write a C program to add two matrix and display result.use dynamic memory allocation*/
//comments are only for understanding don't need to write
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getMatrix(int **matrix,int r,int c)
{
	int i,j;
	for(i=0;i<r;i++) // r=row c=column
    {
        for(j=0;j<c;j++)
        {
            printf("\nEnter %d row %d column element\n",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void printMatrix(int **matrix,int r,int c)
{
	int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf(" | %d",matrix[i][j]);
        
        printf(" |\n");
    }
}
int main()
{
    int r1,c1,r2,c2,i,j,sum=0;
    int **matrix1;
	int **matrix2;
	int **matrix3;// for storing sum of two matrix
    puts("Enter m row or n column for Matrix 1");
    scanf("%d%d",&r1,&c1);
	puts("Enter m row or n column for Matrix 2");
    scanf("%d%d",&r2,&c2);
	  if(r1!=r2||c1!=c2)
	  {
		  printf("Size of both Matrix should same");
		  exit(0);
	  }
	
    matrix1=(int **)calloc(r1,sizeof(int));
    matrix2=(int **)calloc(r2,sizeof(int));
	matrix3=(int **)calloc(r1,sizeof(int));
    for(i=0;i<c1;i++)
	{
		matrix1[i]=(int *)calloc(c1,sizeof(int));
		matrix2[i]=(int *)calloc(c2,sizeof(int));
		matrix3[i]=(int *)calloc(c2,sizeof(int));
	}
    
    puts("Enter elements for matrix 1:");
	getMatrix(matrix1,r1,c1);
    puts("Enter elements for matrix 2:");
    getMatrix(matrix2,r2,c2);
	
	puts("Matrix 1:");
	printMatrix(matrix1,r1,c1);
	puts("Matrix 2:");
	printMatrix(matrix2,r2,c2);
	
    //calucate result
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    }
	puts("Matrix result=Matrix 1 + Matrix 2:");
	printMatrix(matrix3,r1,c1);
	
    
    free(matrix1);
    free(matrix2);
    free(matrix3);
    
}
