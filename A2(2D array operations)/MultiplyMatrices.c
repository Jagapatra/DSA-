//name:jagannath patra sic:22bcsi09 rollno:3
//Q)wap to multiply 2d matrices
#include<stdio.h>
void input(int [][20],int,int);
void display(int [][20],int,int);
void multiply(int [][20],int ,int,int,int [][20],int [][20]);
main()
{
        int a[20][20],r1,r2,c1,c2,b[20][20],c[20][20];
	printf("MATRIX 1\n");
        printf("Enter no of rows:");
        scanf("%d",&r1);
        printf("Enter no of columns:");
        scanf("%d",&c1);
        input(a,r1,c1);
	printf("MATRIX 2\n");
        printf("Enter no of rows:");
        scanf("%d",&r2);
        printf("Enter no of columns:");
        scanf("%d",&c2);
        input(b,r2,c2);
        printf("The matrix 1 is:\n");
        display(a,r1,c1);
	printf("The matrix 2 is:\n");
        display(b,r2,c2);
	if(c1==r2)
	{
		multiply(a,r1,c1,c2,b,c);
		printf("Matrix after multiplication matrix 1 and 2 is:\n");
		display(c,r1,c2);
	}printf("Enter the elements:");
	else
		printf("Matrix multiplication not possible.\n");
}
void input(int a[][20],int row,int col)
{
        int i,j;
	printf("Enter the elements:");
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                         scanf("%d",&a[i][j])      
        }
}
void display(int a[][20],int row,int col)
{
        int i,j;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                       printf("%d ",a[i][j]);
                printf("\n");
	}
}
void multiply(int a[][20],int r1,int c1,int c2,int b[][20],int c[][20])
{
	int i,j,k;
	for(i=0;i<r1;i++)
        {
                for(j=0;j<c2;j++)
                {
			c[i][j]=0;
			for(k=0;k<c1;k++)
				c[i][j]+=a[j][k]*b[k][j];
		}
	}
}
