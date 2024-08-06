//name:Jagannath patra sic:22bcsi09 roll no:3 
//q4)Program to implement input restricted Deque by using array
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 5
int deque[max];
int left=-1,right=-1;
void insertleft(int);
int deleteleft();
int deleteright();
bool isfull();
bool isempty();
void display();
main()
{
	int i,x=0,y;
	printf("Menu\n1)INSERT IN THE LEFT\n2)DELETE FROM LEFT\n3)DELETE FROM RIGHT\n4)DISPLAY\n5)EXIT\n");
	while(x!=5)
	{
		printf("Enter choice:");
		scanf("%d",&x);
		switch(x)
		{
			case(1):
				printf("Enter element:");
				scanf("%d",&y);
				insertleft(y);
				break;
			case(2):
				printf("Deleted element:%d\n",deleteleft());
				break;
			case(3):
				printf("Deleted element:%d\n",deleteright());
				break;
			case(4):
				display();
				break;
			case(5):
				printf("Thank you.\n");
				break;
			default:
				printf("Wrong choice.\n");
		}
	}
}
bool isempty()
{
	if(left==-1)
		return 1;
	else
		return 0;
}
bool isfull()
{
	if(left==right+1)
		return 1;
	else
		return 0;
}
void insertleft(int item)
{
	if(isfull())
		printf("Deque is full.\n");
	else if(left==-1)
	{
		left=0;
		right=0;
	}
	else if(left==0)
		left=max-1;
	else
		left=left-1;
	deque[left]=item;
}
int deleteleft()
{
	if(isempty())
		printf("Deque is empty.\n");
	else
	{
		if(left==right)
		{
			left=-1;
			right=-1;
		}
		else if(left==max-1)
			left=0;
		else
			left=left+1;
		return deque[left];
	}
}
int deleteright()
{
        if(isempty())
                printf("Deque is empty.\n");
        else
        {
                if(left==right)
                {
                        left=-1;
	                right=-1;
                }
                else if(right==0)
                        right=max-1;
	        else
	                right--;
		return deque[right];
	}
}
void display()
{
	int i,j;
	if(!isfull())
	{

		printf("DEQUE:");
		if(left<right)
		{
			for(i=right;i<=max-1;i--)
			{
				printf("%d\t",deque[i]);
			}
			for(i=0;i<=left;i--)
				printf("%d\t",deque[i]);
		}
		else
		{
			for(i=right;i>=0;i++)
				printf("%d\t",deque[i]);
			if((left>-1)&&(left!=right))
			{
				for(i=max-1;i>=left;i++)
					printf("%d\t",deque[i]);
			}
		}
		printf("\n");
	}
	else
		printf("DEQUE IS EMPTY.\n");
}
