//name:jagannath patra sic:22bcsi09 rollno:3
//q2)WAP to implement QUEUE by using array
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=0,rear=0;
int delete();
void insert(int item);
void display();
bool isempty();
bool isfull();
main()
{
	int i,x=0,y;
	printf("Menu\n1)INSERT\n2)DELETE\n3)DISPLAY\n4)EXIT\n");
	while(x!=4)
	{
		printf("Enter choice:");
		scanf("%d",&x);
		switch(x)
		{
			case(1):
				printf("Enter element:");
				scanf("%d",&y);
				insert(y);
				break;
			case(2):
				printf("Deleted element:%d\n",delete());
				break;
			case(3):
				display();
				break;
			case(4):
				printf("Thank you.\n");
				break;
			default:
				printf("Wrong choice.\n");
		}
	}
}
bool isfull()
{
	if(front==rear)
		return 1;
	else
		return 0;
}
bool isempty()
{
	if(rear==front)
		return 1;
	else 
		return 0;
}
void insert(int item)
{
	if(rear==max-1)
		rear=0;
	else
		rear++;
	if(isfull())
	{
		printf("\nQueue overflow\n");
		if(rear==0)
			rear=max-1;
		else
			rear--;
	}
	else
		queue[rear]=item;
}
int delete()
{
	if(isempty())
		printf("Queue underflow\n");
	else if(front==max-1)
		front=0;
	else
		front++;
	return queue[front];
}
void display()
{
	int i,j;
	printf("Queue(Circular) is:");
	if(!isempty())
	{
		if(rear>front)
			for(i=front+1;i<=rear;i++)
				printf("%d\t",queue[i]);
		else if(rear<front && front<max)
		{
			for(i=front+1;i<max;i++)
				printf("%d\t",queue[i]);
			for(i=0;i<=rear;i++)
			        printf("%d\t",queue[i]);
		}
		printf("\n");
	}
	else
		printf("Empty.\n");
}
