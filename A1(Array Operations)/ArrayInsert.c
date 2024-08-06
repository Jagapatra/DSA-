#include<stdio.h>
void insert(int [],int,int,int);
main()
{
	int a[100],b,i,j;
	int c,d;
        printf("Enter number of elemnts in the array:");
        scanf("%d",&b);
        printf("Enter the elements:");
        for(i=0;i<b;i++)
        {
              scanf("%d",&a[i]);
        }
	printf("Enter the elemnt you want to enter and in which position respectively:");
	scanf("%d%d",&c,&d);
	insert(a,b,c,d);
}
void insert(int a[],int b, int c,int d)
{
	int i;
	printf("Array before insertion:");
	for( i=0;i<b;i++)
	{
		printf("%d\t",a[i]);
	}
	int j;
	for(i=b;i>d-1;i--)
	{
		a[i+1]=a[i];
	}
	j=a[d-1];
	a[d-1]=c;
	a[d]=j;
	printf("Array after insertion:");
	for(i=0;i<=b;i++)
	{
		printf("%d\t",a[i]);
	}
}







