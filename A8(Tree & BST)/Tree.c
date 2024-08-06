//name:jagannath patra section:b2 roll no:3
//q1)menu driven program for creation and traversal of a tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node NODE;

NODE* create();
void preorder(NODE*p);
void inorder(NODE *p);
void postorder(NODE *p);

int main()
{
	int x;
	NODE *root=NULL;
	printf("MENU\n1)Create a Tree\n2)Preorder traversal\n3)Inorder traversal\n4)Postorder traversal\n5)Exit\n");
	do
	{
		printf("\nEnter choice:");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				root=create();
				break;
			case 2:
				printf("TREE IN PREORDER:\n");
				preorder(root);
				break;
			case 3:
				printf("TREE IN INORDER:\n");
				inorder(root);
				break;
			case 4:
				printf("TREE IN POSTORDER:\n");
				postorder(root);
				break;
			case 5:
				printf("THE END\n");
				return 0; 
			default:
				printf("Invalid choice\n");
		}
	}while(x!=5);
}

void preorder(NODE*p)
{
	if(p!=NULL)
	{
		printf("%d\t",p->data);
		preorder(p->left);
		preorder(p->right);
	}
}

void inorder(NODE *p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d\t",p->data);
		inorder(p->right);
	}
}

void postorder(NODE *p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d\t",p->data);
	}
}

NODE *create()
{
	int x;
	NODE *new=(NODE *)malloc(sizeof(NODE));
	printf("Enter data (-1 for no node):");
	scanf("%d",&x);
	if(x==-1)
		return NULL;
	new->data=x;
	printf("Enter the left child of %d:\n",x);
	new->left=create();
	printf("Enter the right child of %d:\n",x);
	new->right=create();
	return new;
}





