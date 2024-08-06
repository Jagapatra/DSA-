//name:jagannath patra sic:22bcsi09 rollno:3
//q1)Merging of 2 single linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
}NODE;
void createlist(NODE*);
void traverselist(NODE*);
NODE* merge_list(NODE*,NODE*,NODE*);
int main()
{
	NODE *p=(NODE*)malloc(sizeof(NODE));
	NODE *q=(NODE*)malloc(sizeof(NODE));
	NODE *r=(NODE*)malloc(sizeof(NODE));
	NODE *a=(NODE*)malloc(sizeof(NODE));
	printf("Enter 1st LL(In ascending order):\n");
	createlist(p);
	printf("Enter 2nd LL(In ascending order):\n");
	createlist(q);
	printf("1st linked list:\n");
	traverselist(p);
	printf("2nd linked list:\n");
	traverselist(q);
	a=merge_list(p,q,r);
	printf("Merged linked list is:\n");
	traverselist(a);
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

NODE* merge_list(NODE *p,NODE *q,NODE *r)
{
	int i,j,x=0;
	NODE *new;
	if(p==NULL)
		return q;
	else if(q==NULL)
		return p;
	else
	{       if(p->info <= q->info)
	        {
	              r=p;
	              p=p->next;
	        }
	        else
		{
			r=q;
			q=q->next;
		}
	}
	new=r;
	while((p!=NULL) && (q!=NULL))			// OR   p && q
	{
		if(p->info <= q->info)
		{
			r->next=p;
			p=p->next;
		}
		else 
		{
			r->next=q;
			q=q->next;
		}
		r=r->next;
	}
	if(p==NULL)
		r->next=q;
	else if(q==NULL)
		r->next=p;
	return new;
}


/*NODE *sort(NODE *x)
{	NODE *ptr=NULL;
	int i,temp;
	do
	{
		i=0;
		ptr=x;
		while(ptr->next!=NULL)
		{
			if(ptr->info>ptr->next->info)
			{
				temp=ptr->info;
				ptr->info=ptr->next->info;
				ptr->next->info=temp;
				i=1;
			}
			ptr=ptr->next;
		}
	}
	while(i);
	return x;
}*/

