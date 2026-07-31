/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*left;
	struct node*right;
	int height;
};
struct node*root=NULL,*newnode;
struct node*createnode(int value)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->height=1;
	return newnode;
}
int height(struct node*node)
{
	if(node==NULL)
	return 0;
	return node->height;
}
int max(int a,int b)
{
	return (a>b)?a:b;
}
int getbalance(struct node*node)
{
	if(node==NULL)
	return 0;
	return height(node->left)-height(node->right);
}
struct node* rightrotate(struct node*y)
{
	struct node*x=y->left;
	struct node*t2=x->right;
	x->right=y;
	y->left=t2;
	y->height=max(height(y->left),height(y->right))+1;
	x->height=max(height(x->left),height(x->right))+1;
	return x;
}
struct node* leftrotate(struct node*x)
{
	struct node*y=x->right;
	struct node*t2=y->left;
	y->left=x;
	x->right=t2;
	x->height=max(height(x->left),height(x->right))+1;
	y->height=max(height(y->left),height(y->right))+1;
	return y;
}
struct node*insert(struct node*root,int value)
{       int balance;
	if(root==NULL)
	return createnode(value);
	if(value<root->data)
	root->left=insert(root->left,value);
	else if(value>root->data)
	root->right=insert(root->right,value);
	else
	return root;
	root->height=max(height(root->right),height(root->right))+1;
	balance=getbalance(root);
	if(balance>1&&value<root->left->data)
	return rightrotate(root);
	if(balance<-1&&value>root->right->data)
	return leftrotate(root);
	if(balance>1&&value>root->left->data)
	{
		root->left=leftrotate(root->left);
		return rightrotate(root);
	}
	if(balance<-1&&value<root->right->data)
	{
		root->right=rightrotate(root->right);
		return  leftrotate(root);
	}
	return root;
}
void inorder(struct node*root)
{
	if(root!=NULL)
	{
		inorder(root->left);

		printf("%d ",root->data);
		inorder(root->right);
	}
}
void main()
{
	int choice,value;
	
	while(1)
	{
		printf("\n------------------AVL TREEE---------------------\n");
		printf("1.insert");
		printf("2.inorder tree traversal");
		printf("3.exit");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("enter value to insert");
			scanf("%d",&value);
			root=insert(root,value);
			printf("node inserted successfully");
			break;
			case 2:
			printf("inorder tree traversal");
			inorder(root);
			printf("\n");
			break;
			case 3:
			printf("program terminated");
			exit(0);

			default:
			printf("invalid choice");
		}
	}
	
}




