//name:jagannath patra sec:b2 rollno:3
//Heap sort 
#include<stdio.h>
#include<stdlib.h>
void heap_sort(int []);
void max_heapify(int[],int);
void build_max_heap(int[]);
int left(int n);
int right(int n);
int length=0;
int hsize=0;
main()
{
	int a[10],i;
	printf("Enter no of elements:");
	scanf("%d",&length);
	printf("Enter the elements:");
	for(i=0;i<length;i++)
		scanf("%d",&a[i]);
	printf("Array:\n");
	for(i=0;i<length;i++)
		printf("%d\t",a[i]);
	heap_sort(a);
	printf("\nArray after sorting:");
	for(i=0;i<length;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

int left(int n)
{
	return 2*n+1;
}

int right(int n)
{
	return 2*n+2;
}

void max_heapify(int a[],int i)
{
	//n is length of array
	int l,r,temp,largest=0;
	l=left(i);
	r=right(i);
	if(l<=length && a[l]>a[i])
	{
		largest=l;
	}
	else
		largest=i;
	if(r<=length && a[r]>a[largest])
		largest=r;
	if(largest!=i)
	{
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		max_heapify(a,largest);
	}
}

void build_max_heap(int a[])
{
	int i;
	hsize=length;
	for(i=length/2;i>=1;i--)
	{
		max_heapify(a,i);
	}
}

void heap_sort(int a[])
{
	int temp,i;
	hsize=length;
	build_max_heap(a);
	for(i=length;i>=2;i--)
	{
		temp=a[1];
		a[1]=a[i];
		a[i]=temp;
		hsize--;
		max_heapify(a,0);
	}
}


