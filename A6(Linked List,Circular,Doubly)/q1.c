//Name:jagannath patra sic:22bcsi09 roll no:03
//q1)creating 2 linked list
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
void createlist(NODE *first)
{
	NODE *second;
	first->info=40;
	first->next=NULL;
	second=(NODE*)malloc(sizeof(NODE));
	second->info=30;
	second->next=NULL;
	first->next=second;
}
void traverselist(NODE *first)
{
	printf("LINKED LIST:");
	while(first!=NULL)
	{
		printf("%d\t",first->info);
		first=first->next;
	}
	printf("\n");
}

