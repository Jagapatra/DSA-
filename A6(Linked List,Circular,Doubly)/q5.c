//name:jagannath patra sic:22bcsi09 rollno:3
//Menu driven program for deletion in LL
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
}NODE;
NODE *start=NULL;
void createlist(NODE*);
void traverselist(NODE*);
void delete_first(NODE*);
void delete_last(NODE*);
void delete_after(NODE*);
void delete_position(NODE*);
int main()
{
	int i,x=0;
	NODE *node=(NODE*)malloc(sizeof(NODE));
	printf("Menu\n1)Create a linked list\n2)Traverse a Linked list\n3)Delete the first node of the LL\n4)Delete the last node of the LL\n5)Delete a node after a specific node in the LL\n6)Delete a node after a given location/position in the LL\n7)EXIT\n");
	while(x!=7)
	{
		printf("Enter choice:");
		scanf("%d",&x);
		switch(x)
		{
			case 1 :
				createlist(node);
				start=node;
				break;
			case 2:
				traverselist(start);
				break;
			
			case 3:
				delete_first(node);
				node=start;
				break;
			case 4:
				delete_last(node);
				break;
			case 5:
				delete_after(node);
				break;
			case 6:
				delete_position(node);
				break;
			case 7:
				printf("Thank you.\n");
				break;
			default:
				printf("Wrong choice.\n");
		}
	
	}
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
void delete_first(NODE *node)
{
	if(node!=NULL)
	{
		start=node->next;
		free(node);
	}
}
void delete_last(NODE *node)
{
	NODE *prev;
	if(node->next==NULL)
	{
		start=NULL;
		free(node);
		return;
	}
	while(node->next!=NULL)
	{
		prev=node;
		node=node->next;
	}
	prev->next=NULL;
	free(node);
}
void delete_after(NODE *node)
{
	int key;
	NODE *temp;
	printf("Enter the node value after which u want to delete:");
	scanf("%d",&key);
	while(node!=NULL)
	{
		if(node->info==key)
			break;
		node=node->next;
	}
	if(node==NULL)
	{
		printf("Not a valid node\n");
		return;
	}
	temp=node->next;
	node->next=temp->next;
	free(temp);
}
void delete_position(NODE *node)
{
	int i,pos;
	NODE *temp;
	printf("Enter the position to delete:");
	scanf("%d",&pos);
	if(pos==1)
	{
		delete_first(node);
		return;
	}
	for(i=2;i<=pos;i++)
	{
		temp=node;
		node=node->next;
	}
	temp->next=node->next;
	free(node);
}
