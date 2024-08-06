//name:jagannath patra section:b2 roll no:3
//q2)menu driven program for Binary search tree(BST)
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node NODE;

NODE* create(int key);
NODE*  insert_bst(NODE* root,int key);
void  search_bst(NODE* root,int key);
NODE* delete_bst(NODE* root,int key);
int min_bst(NODE* root);
int max_bst(NODE* root);
void preorder(NODE *p);
void inorder(NODE *p);
void postorder(NODE *p);

int main()
{
	int x,key;
	NODE *root=NULL;
	printf("MENU\n1)Insert a node to the Tree\n2)Preorder traversal\n3)Inorder traversal\n4)Postorder traversal\n5)Search for a element\n6)Find minimum element\n7)Find maximum element\n8)Delete an element\n9)Exit\n");
	do
	{
		printf("\nEnter choice:");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				printf("Enter value to inser:");
				scanf("%d",&key);
				root=insert_bst(root,key);
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
				printf("Enter key:");
				scanf("%d",&key);
				search_bst(root,key);				
				return 0;
			case 6:
				key=min_bst(root);
				printf("Minimum value:%d\n",key);
				break; 
			case 7:
				key=max_bst(root);
				printf("Maximum value:%d\n",key);
				break;
			case 8:
				printf("Enter the value to be deleted:");
				scanf("%d",&key);
		//		delete_bst(NODE *root,int key);
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(x!=9);
}

void preorder(NODE *p)
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

NODE *create(int key)
{
	NODE *new=(NODE *)malloc(sizeof(NODE));
	new->data=key;
	new->left=NULL;
	new->right=NULL;
	return new;
}

int min_bst(NODE* node)
{
	if(node==NULL)
	{
		printf("Tree empty\n");
		return;
	}
	while(node->left !=NULL)
	{
		node=node->left;
	}
	return node->data;
}

int max_bst(NODE* node)
{
	if(node==NULL)
	{
	        printf("Tree empty\n");
	        return;
	}
	while(node->right!=NULL)
	{
		node=node->right;
	}
	return node->data;
}


NODE* insert_bst(NODE *root,int key)
{
       if(root == NULL)
                root=create(key);
       else if(key<root->data)
                root->left = insert_bst(root->left,key);
       else if (key>root->data)
                root->right = insert_bst(root->right,key);
       return root;
}

void search_bst(NODE* root,int key)
{
	while(root!=NULL)
	{
		if(key==root->data)
		{
			printf("key is found.\n");
			return;
		}
		else if(key<root->data)
			root=root->left;
		else
			root=root->right;
	}
	if(root=NULL)
		printf("Not found.\n");
}


/*NODE* delete_bst(NODE* root,int key)
{
	if(root==NULL)
	{
		printf("key not found\n");
		return;
	}
	else if(key<root->data)
		root->left=delete_bst(root->left,key);
	else if(key>root->data)
	{
		//NO child
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			return NULL;
		}

		//! child
		else if(root->left==NULL || root->right==NULL)
		{
			if(root->left==NULL)
			{
				tmp=root->right;
				free(root);
				return tmp;
			}
			else
			{
				tmp=root->left;


		}

		//2 child
		else
		{

		}
*/

