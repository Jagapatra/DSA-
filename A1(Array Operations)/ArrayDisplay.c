#include<stdio.h>
void display(int[],int);
main()
{
	int a[100],b,i,j;
	printf("Enter number of elemnts in the array:");
	scanf("%d",&b);
	printf("Enter the elements:");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	display(a,b);
}
void display(int a[],int b)
{
	int j;
	printf("The elements in the array are:");
	for(j=0;j<b;j++)
	{
		printf("%d\t",a[j]);
	}
}

