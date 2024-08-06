//name:jagannath patra sec:b2 rollno:3
//Selection sort 
#include<stdio.h>
#include<stdlib.h>
void selection_sort(int [],int);

int main()
{
	int a[10],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	selection_sort(a,n);
	printf("Array after sorting:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
void selection_sort(int a[],int n)
{
	int i,j=0,min,temp;
	while(j<n-1)
	{
		min=j;
		i=j+1;
		while(i<n)
		{
			if(a[i]<a[min])
			{
				min=i;
				i=i+1;
			}
		}
		if(min!=j)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		j=j+1;
	}
}

