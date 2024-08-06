//Name:Jagannath patra roll no:3 sic:22bcsi09
//q)wap for stack 
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
	push(5);
	display();
	push(10);
	push(15);
	display();
	push(50);
	pop();
	display();
	pop();
	pop();
	display();
	pop();
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
