//Name:Jagannath patra roll no:3 sic:22bcsi09
//q4)wap for postfix expression by using stack
#include<stdio.h>
#include<stdbool.h>
int top=-1;
#define max 20 
int stack[max];
void push(int);
int pop();
bool isfull();
bool isempty();
void display();
void postfix_convert(char []);
main()
{
	char s[100];
	printf("Enter the postfix expression:");
	scanf("%[^\n]s",s);
	postfix_convert(s);
	printf("The value of the postfix calculation is %d.\n",pop(stack));
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
void postfix_convert(char post[])
{
	int i=0,op1,op2,value;
	while(post[i]!='\0')
	{
		if(post[i]>='0'&& post[i]<='9')
			push(post[i]-'0');
		else if(post[i]=='+'|| post[i]=='-' || post[i]=='*' || post[i]=='/')
		{
			op1=pop();
			op2=pop();
			switch(post[i])
			{
				case'+':
					value=op2+op1;
					break;
				case'-':
					value=op2-op1;
					break;
				case'*':
					value=op2*op1;
					break;
				case'/':
					value=op2/op1;
					break;
			}
			push(value);
		}
		i++;
	}
}

