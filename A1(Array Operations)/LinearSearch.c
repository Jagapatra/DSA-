#include<stdio.h>
int linear_search(int[],int,int);
main()
{
	int a[100],i,j,len,ele,ind;
	printf("Enter number of elements in the array:");
	scanf("%d",&len);
	printf("Enter the elements:");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search:");
	scanf("%d",&ele);
	ind=linear_search(a,len,ele);
	if (ind<0)
	{
		printf("Element not found.\n");
	}
	else
		printf("Element found at index value %d.\n",ind);
}
int linear_search(int a[],int len,int ele)
{
	int i,j;
	for(i=0;i<len;i++)
	{
		if (a[i]==ele)
			return i;
		
	}
	if(i==len)
		return -1;


}


