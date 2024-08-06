//name:jagannath patra sic:22bcsi09 rollno:3
//q2)Bubble sorting of linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
}NODE;
void createlist(NODE*);
void traverselist(NODE*);
NODE* bubble_sort(NODE*);
int main()
{
	NODE *node=(NODE *)malloc(sizeof(NODE));
	printf("Enter the linked list:\n");
	createlist(node);
	printf("The list before sorting:");
	traverselist(node);
	node=bubble_sort(node);
	printf("the list after sorting:");
	traverselist(node);
	return 0;
}
void createlist(NODE *node)
{
	int ch;
	printf("Enter the data:");
	scanf("%d",&node->info);
	node->next=NULL;
	printf("Press 1 to continue:");
	scanf("%d",&ch);
	while(ch!=0)
	{
		node->next=(NODE*)malloc(sizeof(NODE));
		node=node->next;
		printf("Enter the data(info):");
		scanf("%d",&node->info);
		node->next=NULL;
		printf("Enter 1 to continue:");
		scanf("%d",&ch);
	}
}

void traverselist(NODE *first)
{
	if(first==NULL)
		return;
	int i=0;
	while(first!=NULL)
	{
		printf("%d\t",first->info);
		first=first->next;
		i++;
	}
	printf("\nNumber of nodes:%d\n",i);
}

NODE* bubble_sort(NODE *node)
{
	NODE *ptr=node,*temp=NULL,*store=NULL,*base=node;
	int i=0;
	for(ptr=node;ptr!=NULL;ptr=ptr->next)
	{
	//	temp=ptr;
		for(temp=node;temp->next!=temp;temp=temp->next)
		{
			base=temp;
			if(temp->info > temp->next->info)
			{
				store=temp->next->next;
				temp->next->next=temp;
				temp->next=store;
			}
		}
		temp=node;
	}
}



