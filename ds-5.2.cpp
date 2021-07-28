#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct BST
{
	int data;

	struct BST *left;

	struct BST *right;
};
typedef struct BST NODE;
NODE *node;
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
		printf("%d\t", node->data);
		inorder(node->right);
	}	
}
void preorder(NODE *node)
{
	if(node != NULL)
	{
		printf("%d\t", node->data);
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
		printf("%d\t", node->data);
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

NODE* del(NODE *node, int data)
{
	NODE *temp;
	if(node == NULL)
	{
		printf("\nElement not found");
	}
	else if(data < node->data)
	{
		node->left = del(node->left, data);
	}
	else if(data > node->data)
	{
		node->right = del(node->right, data);
	}
	else
	{
 /* Now We can delete this node and replace with either minimum element in 
 the right sub tree or maximum element in the left subtree */

		if(node->right && node->left)
		{
 /* Here we will replace with minimum element in the right sub tree */
			temp = findMin(node->right);
			node -> data = temp->data;
/* As we replaced it with some other node, we have to delete that node */
			node -> right = del(node->right,temp->data);
		}
		else
		{
/* If there is only one or zero children then we can directly remove it from 
the tree and connect its parent to its child */
			temp = node;
			if(node->left == NULL)
				node = node->right;
			else if(node->right == NULL)
				node = node->left;
				free(temp); /* temp is longer required */
		}
	}
	return node;
}
int main()
{
	int data, ch, i, n;
	NODE *root=NULL;
	while (1)
	{
		printf("\n1.Insertion in Binary Search Tree");
		printf("\n2.Delete Element in Binary Search Tree");
		printf("\n3.Inorder\n4.Preorder\n5.Postorder\n6.Exit");
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
			case 2: printf("\nEnter the element to delete: ");
				scanf("%d", &data);
				root=del(root, data);
				break;
			case 3: printf("\nInorder Traversal: ");
				inorder(root);
				break;
			case 4: printf("\nPreorder Traversal: ");
				preorder(root);
				break;
			case 5: printf("\nPostorder Traversal: ");
				postorder(root);
				break;
			case 6: exit(0);
			default:printf("\nWrong option");
				break;
		}
	}
}
