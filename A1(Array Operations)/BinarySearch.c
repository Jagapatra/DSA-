#include<stdio.h>
int binary_search(int[],int,int);
main()
{
        int a[100],i,j,len,ele,ind;
        printf("Enter number of elements in the array:");
        scanf("%d",&len);
        printf("Enter the elements of the sorted array:");
        for(i=0;i<len;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter the element you want to search:");
        scanf("%d",&ele);
        ind=binary_search(a,len,ele);
        if (ind<0)
        {
               printf("Element not found.\n");
        }
        else
               printf("Element found at index value %d.\n",ind);
}
int binary_search(int a[],int len,int ele)
{
	int low=0,high=len-1,mid;
	int ind;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]<ele)
			low=mid+1;
		else if (a[mid]>ele)
			high=mid-1;
		else
			return mid;
	}
	return -1;
}


