//name:jagannath patra sec;b2 roll no :3
//q7)Circular linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
}NODE;
NODE *start=NULL;
void create(NODE*);
void traverse(NODE*);
void delete_after(NODE*);
void insert_after(NODE*);
int main()
{
	int i,x=0;
	NODE *node=(NODE*)malloc(sizeof(NODE));
	printf("Menu\n1)Create a CLL\n2)Traverse a CLL\n3)Insert after a node of the CLL\n4)Delete after a node of the CLL\n5)EXIT\n");
	while(x!=5)
	{
		printf("Enter choice:");
		scanf("%d",&x);
		switch(x)
		{
			case 1 :
				start=node;
				create(node);
				break;
			case 2:
				traverse(start);
				break;
			
			case 3:
				insert_after(node);
				break;
			case 4:
				delete_after(node);
				break;
			case 5:
				printf("Thank you.\n");
				break;
			default:
				printf("Wrong choice.\n");
		}
	}
}
void create(NODE *node)
{
	int ch;
	printf("Enter the info:");
	scanf("%d",&node->info);
	node->next=start;
	printf("Press 1 to continue:");
	scanf("%d",&ch);
	while(ch==1)
	{
		node->next=(NODE*)malloc(sizeof(NODE));
		node=node->next;
		printf("Enter the info:");
		scanf("%d",&node->info);
		node->next=start;
		printf("Press 1 to continue:");
		scanf("%d",&ch);
	}
}
void traverse(NODE *node)
{
	do
	{
		printf("%d\t",node->info);
		node=node->next;
	}while(node!=start);
	printf("\n");
}
void insert_after(NODE *node)
{
	int key;
	NODE *new=(NODE*)malloc(sizeof(NODE));
	printf("Enter the key value after which u want to insert:");
	scanf("%d",&key);
	do
	{
		if(node->info==key)
			break;
		node=node->next;
	}while(node!=start);
	if(node==start)
	{
		printf("Node not found\n");
		return;
	}
	printf("Enter the node value:");
	scanf("%d",&new->info);
	//for insertion after last node
	if(node->next==start)
	{
		node->next=new;
		new->next=start;
	}
	else
	{
		new->next=node->next;
		node->next=new;
	}
}
void delete_after(NODE *node)
{
	int key;
	NODE* new=node;
	printf("Enter the value after which the element tol be deleted:");
	scanf("%d",&key);
	if(node->info==key)
	{
		if(node->next=node)
		{
			start=NULL;
			free(node);
			return;
		}		
		new=new->next;
		node->next=new->next;
		free(new);
		return;
	}
	do
	{
		if(node->info==key)
			break;
		node=node->next;
	}while(node!=start);
	if(node==start)
	{
		printf("Node not found\n");
		return;
	}
	else if(node->next==start)
	{
		node->next=start->next;
		new=start;
		start=start->next;
	}
	else
	{
		new=node->next;
		node->next=new->next;
	}
	free(new);
}

