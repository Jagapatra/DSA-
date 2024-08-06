//name:jagannath patra sec;b2 roll no :3
//q7)Doubly linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct dlnode
{
	int info;
	struct dlnode *next;
	struct dlnode *prev;
}NODE;
void create_dlist(NODE*);
void traverse_dlist(NODE*);
void delete_after(NODE*);
void insert_after(NODE*);
int main()
{
	int i,x=0;
	NODE *node=(NODE*)malloc(sizeof(NODE));
	printf("Menu\n1)create_dlist a DLL\n2)traverse_dlist a DLL\n3)Insert after a node of the DLL\n4)Delete after a node of the DLL\n5)EXIT\n");
	while(x!=5)
	{
		printf("Enter choice:");
		scanf("%d",&x);
		switch(x)
		{
			case 1 :
				create_dlist(node);
				break;
			case 2:
				traverse_dlist(node);
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
void create_dlist(NODE *node)
{
	int ch;
	printf("Enter the info:");
	scanf("%d",&node->info);
	node->prev=NULL;
	node->next=NULL;
	printf("Press 1 to continue:");
	scanf("%d",&ch);
	while(ch==1)
	{
		NODE *new=(NODE*)malloc(sizeof(NODE));
		node->next=new;
		new->prev=node;
		node=node->next;
		printf("Enter the info:");
		scanf("%d",&node->info);
		node->next=NULL;
		printf("Press 1 to continue:");
		scanf("%d",&ch);
	}
}
void traverse_dlist(NODE *node)
{
	NODE *temp;	
	printf("DLL in forward direction:\n");
	while(node!=NULL)
	{
		temp=node;
		printf("%d\t",node->info);
		node=node->next;
	}
	printf("\nDLL in backward direction:\n");
	node=temp;
	while(node!=NULL)
	{
		temp=node;
		printf("%d\t",node->info);
		node=node->prev;
	}
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
	}while(node!=NULL);
	if(node==NULL)
	{
		printf("Value not found.\n");
		return;
	}
	printf("Enter the node value:");
	scanf("%d",&new->info);
	if(node->next!=NULL)
	{
		new->prev=node;
		new->next=node->next;
		node->next->prev=new;
		node->next=new;
	}
	else
	{
		new->next=NULL;
		new->prev=node;
		node->next=new;
	}
}
void delete_after(NODE *node)
{
	int key;
	NODE* new=node;
	printf("Enter the value after which the element to be deleted:");
	scanf("%d",&key);
	do
	{
		if(node->info==key)
			break;
		node=node->next;
	}while(node->next!=NULL);
	if(node==NULL)
	{
		printf("Node not found\n");
		return;
	}
	else if(node->next==NULL)
	{
		new=node;
		node->prev->next=NULL;
	}
	else
	{
		new=node->next;
		node->next=new->next;
		new->next->prev=node;
	}
	free(new);
}

