#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * left;
	struct Node * right;
};
struct Node * CreateNode(int value)
{
	struct Node * n;
	n = (struct Node *)malloc(sizeof(struct Node));
	n->data = value;
	n->left = NULL;
	n->right = NULL;
	return n;
}
int insert(struct Node * root,int key)
{
	struct Node * prev = NULL;
	while(root != NULL)
	{
		prev = root;
		if(key == root->data)
		{
			printf("%d is already exist:\n",key);
				return 0;
		}
		else if(key < root->data)
		{
			root = root->left;
		}
		else
		{
			root = root->right;	
		}
	}
	struct Node * ne = CreateNode(key);
	if(key < prev->data)
	{
		prev->left = ne;
	}
	else
	{
		prev->right = ne;
	}
}
void PreOrder(struct Node * root)
{
	
		if(root != NULL)
		{
			printf("%d\t",root->data);	
			PreOrder(root->left);
			PreOrder(root->right);
		}
}
void PostOrder(struct Node * root)
{
	if(root != NULL)
		{		
			PostOrder(root->left);
		
			PostOrder(root->right);
			printf("%d\t",root->data);	
		}
}
void InOrder(struct Node * root)
{
	if(root != NULL)
	{		
		InOrder(root->left);
		printf("%d\t",root->data);	
		InOrder(root->right);		
	}
}
int IsBST(struct Node * root)
{
	static struct Node * prev = NULL;
	if(root != NULL)
	{
		if(!IsBST(root->left))
		{
				return 0;
		}
		if(prev != NULL && root->data <= prev->data)
		{
		
			return 0;
		}
		prev = root;
		return IsBST(root->right);
	}
	else
	{
		return 1;	
	}
}
struct Node * searchIterative(struct Node * root,int key)
{
	while(root != NULL)
	{
		if(key == root->data)
		{
			return root;
		}
		else if(key <root->data)
		{
			root = root->left;
		}
		else
		{
		root = root->right;	
			
		}
	}
	return NULL;
}
int main()
{
	
	//  Create a Node Using Functions
	struct Node * a = CreateNode(10);
	struct Node * b = CreateNode(20);
	struct Node * c = CreateNode(30);
	struct Node * d = CreateNode(40);
	struct Node * e = CreateNode(50);
	struct Node * f = CreateNode(60);
	a->left = b;
	a->right = c;
	b->left = d;
	b->right = e;
	c-> left = f;
	/*int x = IsBST(a);
	printf("%d\n",x);*/
	printf("PreOrder Traversal\n");
	PreOrder(a);
	printf("\nPostOrder Traversal\n");
	PostOrder(a);
	printf("\nInOrder Traversal\n");
	InOrder(a);
	printf("%d",searchIterative(a,20));
/*	insert(a,16);
	printf("\n%d",a->right->right->data);
	
/*	p = (struct Node *)malloc(sizeof(struct Node));
	p->data = 10;
	struct Node * c;
	c = (struct Node *)malloc(sizeof(struct Node *));
	c->data = 20;
	c->left = NULL;
	c->right = NULL;
  			10
		 /    \
		20    30
				   
*/
	return 0;
}
