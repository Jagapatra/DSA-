//na e:jagannath patra sic:22bcsi09 rollno:3
#include<stdio.h>
void read_matrix(int a[][20],int m,int n);
void convert_triplet(int a[][20],int m,int n,int b[][3]);
void display_triplet(int b[][3]);
main()
{
	int a[20][20],b[20][3],m,n;
	printf("Enter no of rows and columns respectively:");
	scanf("%d%d",&m,&n);
	read_matrix(a,m,n);
	convert_triplet(a,m,n,b);
	printf("TRIPLET MATRIX:\n");
	display_triplet(b);
}
void read_matrix(int a[][20],int m,int n)
{
	int i,j;
	printf("Enter the elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("MATRIX\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void convert_triplet(int a[][20],int m,int n,int b[][3])
{
	int i,j,k=1;
	b[0][0]=m;
	ib[0][1]=n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		}
		b[0][2]=k-1;
	}
}
void display_triplet(int b[][3])
{
	int i,j,k;
	k=b[0][2];
	printf("Row\tColumn\tValue\n");
	for(i=0;i<=k;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
}



