#include <stdio.h>
#include <stdlib.h>
#include<math.h>
struct BST
{
	int data;

	struct BST *left;

	struct BST *right;
};
typedef struct BST NODE;
NODE *node;
/* creation of binary search tree */
NODE* createtree(NODE *node, int data)
{
	if (node == NULL)
	{
		NODE *temp;
		temp= (NODE*)malloc(sizeof(NODE));
		temp->data = data;
		temp->left = temp->right = NULL;
		return temp;
	}
	if (data < (node->data))
	{
		node->left = createtree(node->left, data);
	}
	else if (data > node->data)	
	{
		node -> right = createtree(node->right, data);	
	}
	return node;
}

void inorder(NODE *node)
{
	if(node != NULL)
	{
		inorder(node->left);
		printf("\t%d", node->data);
		inorder(node->right);
	}	
}
void preorder(NODE *node)
{
	if(node != NULL)
	{
		printf("\t%d", node->data);
		preorder(node->left);
		preorder(node->right);	
	}
}

void postorder(NODE *node)
{	
	if(node != NULL)
	{	
		postorder(node->left);
		postorder(node->right);
		printf("\t%d", node->data);
	}
}
NODE* findMin(NODE *node)
{
	if(node==NULL)
	{
		return NULL;
	}
	if(node->left)	
		return findMin(node->left);
	else
		return node;
}

void main()
{
	int data, ch, i, n;
	NODE *root=NULL;
	while (1)
	{
		printf("\n1.Insertion in Binary Search Tree");
		printf("\n2.Inorder\n3.Preorder\n4.Postorder\n5.Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
			case 1: printf("\nEnter N value: " );
				scanf("%d", &n);
				printf("\nEnter the values to create BST like(1,2,5,7,22,15,11,14,13,8,6,31):\n");
				for(i=0; i<n; i++)
				{
					scanf("%d", &data);
					root=createtree(root, data);
				}
				break;
			case 2: printf("\nInorder Traversal: ");
				inorder(root);
				break;
			case 3: printf("\nPreorder Traversal: ");
				preorder(root);
				break;
			case 4: printf("\nPostorder Traversal: ");
				postorder(root);
				break;
			case 5: exit(0);
			default:printf("\nWrong option");
				break;
		}
	}
} 

