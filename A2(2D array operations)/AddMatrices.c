//name:jagannath patra sic:22bcsi09 rollno:3
//Q)wap to add 2d matrices
#include<stdio.h>
void input(int [][20],int,int);
void display(int [][20],int,int);
void add(int [][20],int ,int,int [][20],int [][20]);
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
	if((r1==r2)&&(c1==c2))
	{
		add(a,r1,c1,b,c);
		printf("Matrix after adding matrix 1 and 2 is:\n");
		display(c,r1,c1);
	}
	else
		printf("Matrix addition not possible since number of rows and columns is not same in both the matrices.");
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
void add(int a[][20],int row,int col,int b[][20],int c[][20])
{
	int i,j;
	for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        c[i][j]=a[i][j]+b[i][j];
		}
        }
}


