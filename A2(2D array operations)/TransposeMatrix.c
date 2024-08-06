//name:jagannath patra sic:22bcsi09  rollno:3
//Q)wap by using function to read ,transpose and display a 2d array 
#include<stdio.h>
void input(int [][20],int,int);
void display(int [][20],int,int);
void transpose(int [][20],int int,int [][20]);
main()
{
        int a[20][20],row,col,b[20][20];
        printf("Enter no of rows:");
        scanf("%d",&row);
        printf("Enter no of columns:");
        scanf("%d",&col);
        input(a,row,col);
        printf("The matrix is:\n");
        display(a,row,col);
	transpose(a,row,col,b);
	printf("Matrix transpose:\n");
	display(b,col,row);
}
void input(int a[][20],int row,int col)
{
        int i=0,j=0;
        for(i=0;i<row;i++)
        {
                printf("Enter the elements:");
                for(j=0;j<col;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
}
void display(int a[][20],int row,int col)
{
        int i=0,j=0;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        printf("%d ",a[i][j]);
                }
        printf("\n");
	}
}
void transpose(int a[][20],int row,int col,int b[][20])
{
	int i=0,j=0;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        b[j][i]=a[i][j];
                }
        }
}
