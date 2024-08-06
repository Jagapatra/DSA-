//name:jagannath patra sec:b2 rollno:3
//Insertion sort 
#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int [],int);

int main()
{
	int a[10],n,i;
	printf("Enter no of elements");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertion_sort(a,n);
	printf("Array after sorting:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

void insertion_sort(int a[],int n)
{
	int j=1,temp,i;
	while(j<n)
	{
		temp=a[j];
		i=j-1;
		while(i>=0 && a[i]>temp)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=temp;
		j=j+1;
	}
}

