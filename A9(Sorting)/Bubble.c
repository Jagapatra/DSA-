//name:jagannath patra sec:b2 rollno:3
//Bubble sort 
#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int [],int);

int main()
{
	int a[10],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubble_sort(a,n);
	printf("Array after sorting:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
 
void bubble_sort(int a[],int n)
{
	int i=0,j,temp;
	while(i<n-1)
	{
		j=0;
		while(j<n-i-1)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			j=j+1;
		}
		i=i+1;
	}
}
