//name:jagannath patra sic:22bcsi09 rollno:3
//q1)WAP to implement QUEUE by using array
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=0,rear=-1;
int delete();
void insert(int item);
void display();
bool isempty();
bool isfull();
main()
{
	int i,x=0;
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
				printf("Deleted element:%d",delete());
				break;
			case(3):
				display();
				break;
			case(4):
				printrf("Thank you.\n");
				break;
			default:
				printf("Wrong choice.\n")
		}
	}
}
bool isfull()
{
	if(rear==max-1)
		return 1;
	else
		return 0;
}
bool isempty()
{
	if(rear<front)
		return 1;
	else 
		return 0;
}
void insert(int item)
{
	if(isfull())
		printf("Queue overflow\n");
	else
	{
		rear++;
		queue[rear]=item;
	}
}
int delete()
{
	if(isempty())
		printf("Queue underflow\n");
	else
	{
		return queue[front++];
	}
}
void display()
{
	int i,j;
	printf("Queue is:");
	if(!isempty())
	{
		for(i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
		printf("\n");
	}
	else
		printf("Empty.\n");
}

