//Name:Jagannath patra roll no:3 sic:22bcsi09
//q2)wap for menu stack
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 5
typedef struct
{
	int top;
	int a[max];
}stack;
void create(stack*);
void push(stack*,int);
int pop(stack*);
bool isfull(stack*);
bool isempty(stack*);
void display(stack*);
int main()
{
	int i ,j,choice=0;
	stack *s;
	s=(stack*)malloc(sizeof(stack));
	while(choice !=4)
	{
		printf("MENU:\n1)push\n2)pop\n3)display\n4)exit\nEnter your choice:");
		scanf("%d",&choice);
		if (choice==1)
		{	
			printf("Enter the element to push:");
			scanf("%d",&j);
			push(s,j);
		}
		else if(choice ==2)
		{
			pop(s);
		}
		else if(choice==3)
			display(s);
		else if(choice==4) 
		{	printf("Thank you.\n");
			continue;
		}
		else
			printf("Wrong choice.\n");
	}
}
bool isfull(stack* s)
{
	if(s->top==max-1)
		return 1;
	else
		return 0;
}
void create(stack* s)
{
	s->top=-1;
}
bool isempty(stack* s)
{
	if(s->top==-1)
		return 1;
	else
		return 0;
}
void push(stack* s,int item)
{
	if(isfull(s)!=1)
	{
		s->top++;
		s->a[s->top]=item;
	}
	else
		printf("Stack is Full.\n");
}
int pop(stack* s)
{
	if(isempty(s)!=1)
	{
		int x;
		x=s->a[s->top];
		s->top--;
		return x;
	}
	else
		printf("Stack is Empty.\n");
}
void display(stack* s)
{
	int i;
	if (s->top!=-1)
	{
	printf("Stack is :");
	for (i=0;i<=s->top;i++)
		printf("%d\t",s->a[i]);
	printf("\n");
	}
	else
		printf("Stack is empty.\n");
}	
