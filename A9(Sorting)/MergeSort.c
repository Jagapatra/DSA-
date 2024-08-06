//name:jagannath patra sec:b2 rollno:3
//Merge sort 
#include<stdio.h>
#include<stdlib.h>
void merge_sort(int [],int,int);
void merge(int [],int,int,int);
int main()
{
	int a[10],n,i,p,r;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	p=0;
	r=n-1;
	merge_sort(a,p,r);
	printf("Array after sorting:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

void merge_sort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}

void merge(int a[],int p,int q,int r)
{
	int i=p,j=q+1,k=p;
	int b[20];
	int l;
	while((i<=q) && (j<=r))
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i=i+1;
		}
		else
		{
			b[k]=a[j];
			j=j+1;
		}
		k=k+1;
	}
	if(i>q)
	{
		for(l=j;l<r;l++)
		{
			b[k]=a[l];
			k=k+1;
			l=l+1;
		}
	}
	else
	{
		for(l=i;l<q;l++)
		{
			b[k]=a[i];
			k=k+1;
			l=l+1;
		}
	}
	for(k=p;k<r;k++)
		a[k]=b[k];
}



