//name:jagannath patra sic:22bcsi09 rollno:3
//Search a value in the linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
}NODE;
void createlist(NODE*);
void traverselist(NODE*);
void searchlist(NODE*);
int main()
{
	NODE *node=(NODE*)malloc(sizeof(NODE));
	createlist(node);
	traverselist(node);
	searchlist(node);
}
void createlist(NODE *node)
{
	int ch;
	printf("Enter the data:");
	scanf("%d",&node->info);
	node->next=NULL;
	printf("Press 1 to continue or 0 to exit:");
	scanf("%d",&ch);
	while(ch!=0)
	{
		node->next=(NODE*)malloc(sizeof(NODE));
		node=node->next;
		printf("Enter the data(info):");
		scanf("%d",&node->info);
		node->next=NULL;
		printf("Enter 1 to continue or 0 to exit:");
		scanf("%d",&ch);
	}
}
void traverselist(NODE *first)
{
	int i=0;
	printf("LINKED LIST:");
	while(first!=NULL)
	{
		printf("%d\t",first->info);
		first=first->next;
		i++;
	}
	printf("\nNumber of nodes:%d\n",i);
}
void searchlist(NODE *node)
{
	int key,i=0;
	printf("Enter the value you want to seach:");
	scanf("%d",&key);
	while(node!=NULL)
	{
		i++;
		if(key==node->info)
		{
			printf("%d found at %d postion",key,i);
			break;
		}
		node=node->next;
	}
	if(node==NULL)
	{
		printf("Element not found\n");
	}
}


