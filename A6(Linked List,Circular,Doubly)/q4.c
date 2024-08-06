//name:jagannath patra sic:22bcsi09 rollno:3
//Menu driven program for insertion in linked list
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
void searchlist(NODE*);
void insert_beg(NODE*);
void insert_end(NODE*);
void insert_after(NODE*);
void insert_position(NODE*);
int main()
{
	int i,x=0;
	NODE *node=(NODE*)malloc(sizeof(NODE));
	printf("Menu\n1)Create a linked list\n2)Traverse a Linked list\n3)Insert a node at the beginning of the LL\n4)Insert a node at the end of the LL\n5)Insert a node after a specific nodein the LL\n6)Insert a node after a given location/position in the LL\n7)EXIT\n");
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
				insert_beg(node);
				node=start;
				break;
			case 4:
				insert_end(node);
				break;
			case 5:
				insert_after(node);
				break;
			case 6:
				insert_position(node);
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
void insert_beg(NODE *node)
{
	NODE *new=(NODE*)malloc(sizeof(NODE));
	if(new==NULL)
	{
		printf("Not enough memory\n");
		exit(0);
	}
	printf("Enter the node info:");
	scanf("%d",&new->info);
	new->next=node;
	start=new;
}
void insert_end(NODE *node)
{
	NODE *new=(NODE*)malloc(sizeof(NODE));
	if(new==NULL)
	{
		printf("Not enough memory\n");
		exit(0);
	}
	printf("Enter the info:");
	scanf("%d",&new->info);
	while(node->next!=NULL)
		node=node->next;
	node->next=new;
	new->next=NULL;
}
void insert_after(NODE *node)
{
	int key;
	NODE *new;
	printf("Enter the value of the key after which u want to insert:");
	scanf("%d",&key);
	while(node!=NULL)
	{
		if(key==node->info)
			break;
		node=node->next;
	}
	if(node==NULL)
	{
		printf("Not a valid node\n");
		return;
	}
	new=(NODE*)malloc(sizeof(NODE));
	printf("Enter the value:");
	scanf("%d",&new->info);
	new->next=node->next;
	node->next=new;
}
void insert_position(NODE *node)
{
	int position,i=1,y;
	printf("Enter the position to insert a new node:");
	scanf("%d",&position);
	NODE *new=(NODE*)malloc(sizeof(NODE));
	printf("Enter the value:");
	scanf("%d",&new->info);
	if(position!=1)
	{
	for(;i<position-1;i++)
	{
		if(node->next!=NULL)
		 	i++;
		else
		{       printf("The position is greater than the total number of elements present.\n");	
			break;
		}
		node=node->next;
	}
	}
	else
	{
		new->next=node;
		start=new;
	}
	new->next=node->next;
	node->next=new;	
}
