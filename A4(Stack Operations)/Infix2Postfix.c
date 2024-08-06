//Name:Jagannath patra sic:22bcsi09 rollno:3 branch:cse
//write a function to convert an infix expression to postfix expression by using stack
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
int top=-1;
#define max 30  
char stack[max];
void push(char);
char pop();
bool isempty();
bool isfull();
void display();
int precedence(char);
void infix_postfix(char[],char[]);
int main()
{
	char infix[100],postfix[100];
	int i,j;
	printf("Enter the infix epression:");
	scanf("%[^\n]s",infix);
	infix_postfix(infix,postfix);
	printf("The postfix expression:%s\n",postfix);	
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
void push(char item)
{
	if(!isfull())
	{
		top++;
		stack[top]=item;
	}
	else
		printf("Stack is Full.\n");
}
char pop()
{
	if(isempty()!=1)
	{
		char x;
		x=stack[top];
		top=top-1;
		return x;
	}
	else
		printf("Stack is Empty.\n");
}
void infix_postfix(char infix[],char postfix[])
{
	int i=0,j=0;
	char x,symbol,var;
	while(infix[i]!='\0')
	{
		symbol=infix[i];
		if((symbol>='a'&& symbol<='z') || (symbol>=0 && symbol<=9) || (symbol>='A'&& symbol<='Z'))
		{
			postfix[j]=symbol;
			j++;
		}
		else if(symbol=='(')
		{
			push(symbol);
		}
		else if(symbol==')')
		{
			var=pop();
			while(var!='(')
			{
				postfix[j]=var;
				j++;
				var=pop();
			}
		}
		else //if(symbol=='+' || symbol=='-' || symbol=='*' || symbol=='/' || symbol=='%' || symbol=='^')
		{
			while((precedence(symbol)<=precedence(stack[top])) && top!=-1)
			{
				x=pop();
				postfix[j]=x;
				j++;
			}
			push(symbol);
		}
		i++;
	}
	
	while(!isempty())
	{
		x=pop();
		postfix[j]=x;
		j++;
	}
	postfix[j]='\0';	
}
int precedence(char x)
{
	if(x=='(')
		return 0;
	if(x=='+' || x=='-')
		return 1;
	if(x=='*' || x=='/' || x=='%')
		return 2;
	return 3;
}
