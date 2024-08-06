//Name:jagannath patra sic:22bcsi09 roll no:03
//q2)creating linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node NODE;
void createlist(NODE*);
void traverselist(NODE*);
int main()
{
	NODE *node;
	node=(NODE*)malloc(sizeof(NODE));
	createlist(node);
	traverselist(node);
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

