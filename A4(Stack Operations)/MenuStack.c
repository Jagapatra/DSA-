//Name:Jagannath patra roll no:3 sic:22bcsi09
//q2)wap for menu stack
#include<stdio.h>
#include<stdbool.h>
int top=-1;
#define max 3
int stack[max];
void push(int);
int pop();
bool isfull();
bool isempty();
void display();
int main()
{
	int i ,j,choice=0;
	while(choice !=4)
	{
		printf("MENU:\n1)push\n2)pop\n3)display\n4)exit\nEnter your choice:");
		scanf("%d",&choice);
		if (choice==1)
		{	
			printf("Enter the element to push:");
			scanf("%d",&j);
			push(j);
		}
		else if(choice ==2)
		{
			pop();
		}
		else if(choice==3)
			display();
		else if(choice==4) 
		{	printf("Thank you.\n");
			continue;
		}
		else
			printf("Wrong choice.\n");
	}
}
bool isfull()
{
	if (top==max-1)
		return 1;
	else 
		return 0;
}
bool isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
void push(int item)
{
	if(isfull()!=1)
	{
		top++;
		stack[top]=item;
	}
	else
		printf("Stack is Full.\n");
}
int pop()
{
	if(isempty()!=1)
	{
		int x;
		x=stack[top];
		top=top-1;
		return x;
	}
	else
		printf("Stack is Empty.\n");
}
void display()
{
	int i;
	if (top!=-1)
	{
	printf("Stack is :");
	for (i=0;i<=top;i++)
		printf("%d\t",stack[i]);
	printf("\n");
	}
	else
		printf("Stack is empty.\n");
}
