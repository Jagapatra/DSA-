#include<stdio.h>
void delete(int [],int,int);
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
         printf("Enter the elemnt you want to delete:");
         scanf("%d",&c);
         delete(a,b,c);
}
void delete(int a[],int b,int c)
{
	int i,j;
	printf("Array before deletion:");
	for(i=0;i<b;i++)
	{
		printf("%d  ",a[i]);
		if (a[i]==c)
			j=i;

	}
	printf("Array after deletion:");
	for(j;j<b-1;j++)
	{
		a[j]=a[j+1];
	}
	for(i=0;i<b-1;i++)
	{
		printf("%d  ",a[i]);
	}
}

	

	
