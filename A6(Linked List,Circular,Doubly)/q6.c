//name:jagannath patra sec;b2 roll no :3
//q6)Polynomial addition 
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int coeff;
	int expt;
	struct node *next;
}NODE;
void create(NODE*);
void polyadd(NODE*,NODE*,NODE*);
void display(NODE*);
int main()
{
	NODE *p=(NODE*)malloc(sizeof(NODE));
	NODE *q=(NODE*)malloc(sizeof(NODE));
	NODE *r=(NODE*)malloc(sizeof(NODE));
	printf("Enter the 1st polynomial:\n");
	create(p);
	printf("Enter the 2nd polynomial:\n");
	create(q);
	printf("1st polynomial:\n");
	display(p);
	printf("2nd polynomial:\n");
	display(q);
	polyadd(p,q,r);
	printf("The resultant polynomial is:\n");
	display(r);
	return 0;
}

void create(NODE *node)
{
	int ch=0;
	do
	{
		if(ch==1)
			node=node->next;
		printf("Enter the coefficient:");
		scanf("%d",&node->coeff);
		printf("Enter the exponent:");
		scanf("%d",&node->expt);
		node->next=(NODE*)malloc(sizeof(NODE));
		printf("Press 1 to continue:");
		scanf("%d",&ch);
	}while(ch==1);
	node->next=NULL;
}

void polyadd(NODE *p,NODE *q,NODE *r)
{
	while(p!=NULL && q!=NULL)
	{
		if(p->expt > q->expt)
		{
			r->expt=p->expt;
			r->coeff=p->coeff;
			p=p->next;
		}
		else if(p->expt < q->expt)
		{
			r->expt=q->expt;
			r->coeff=q->coeff;
			q=q->next;
		}
		else
		{
			r->coeff=p->coeff+q->coeff;
			r->expt=p->expt;
			p=p->next;
			q=q->next;
		}
		r->next=(NODE*)malloc(sizeof(NODE));
		r=r->next;
		r->next=NULL;
	}
	if(q==NULL)
	{
	while(p!=NULL)
	{
		r->coeff=p->coeff;
		r->expt=p->expt;
		p=p->next;
		r->next=(NODE*)malloc(sizeof(NODE));
		r=r->next;
		//r->next=NULL;	
	}
	return;
	}
	while(q!=NULL)
        {
                r->coeff=q->coeff;
                r->expt=q->expt;
                q=q->next;
                r->next=(NODE*)malloc(sizeof(NODE));
		r=r->next;		
		//r->next=NULL;        
	}
	r=NULL;
}
void display(NODE *node)
{
	while(node->next!=NULL)
	{
		printf("%dx^%d + ",node->coeff,node->expt);
		node=node->next;
	}
	printf("%dx^%d.\n",node->coeff,node->expt);
}


