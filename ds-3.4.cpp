#include<stdio.h>
int create();
int prnt();
int sort();
int sum();

struct expo
{
	 int coff;
	 int pow;
	 struct expo *link;
}*ptr,*start1,*node,*start2,*start3,*ptr1,*ptr2;

typedef struct expo next;
int temp1,temp2;

int main()
{
	  printf("\nEnter the elements of the first polynomial :");
	  node = (next *)(sizeof (next));
	  start1=node;
	  if (start1==NULL)
	 {
		   printf("\nUnable to create memory.");	   
	  }
	  create();
	  printf("\nEnter the elements of the second polynomial :");
	  node = (next *)(sizeof (next));
	  start2=node;
	  if (start2==NULL)
	 {
		   printf("\nUnable to create memory.");
	  }
	  create();
	  
	  printf("\nThe first  expression : ");
	  ptr=start1;
	  sort();
	  ptr=start1;
	  prnt();
	  printf("\nThe second expression : ");
	  ptr=start2;
	  sort();
	  ptr=start2;
	  prnt();
	  printf("\nThe sum of expressions : ");
	  sum();
	  ptr=start3;
	  prnt();
}


int create()
{
	 char ch;
	 while(1)
	{
		printf("\nEnter the coff and pow :");
		scanf("%d%d",&node->coff,&node->pow);
		if (node->pow==0 )
		{
			ptr=node;
			node=(next *)(sizeof(next));
			node=NULL;
			ptr->link=node;
			break;
		 }
		 printf("\nDo u want enter more coff ?(1/0)");
		 fflush(stdin);
		 scanf("%c",&ch);
		 if (ch=='0' )
		 {
			ptr=node;
			node=(next *)(sizeof(next));
			node=NULL;
			ptr->link=node;
			break;
		  }
		  ptr=node;
		  node=(next *)(sizeof(next));
		  ptr->link=node;
	}
}

int prnt()
	{
	int i=1;
	while(ptr!=NULL )
	{
		if(i!=1)
		printf("+ ");
		printf(" %dx^%d ",ptr->coff,ptr->pow);
		ptr=ptr->link;
		i++;
	}
}

int sort()
{
	for(;ptr->coff!=NULL;ptr=ptr->link)
		for(ptr2=ptr->link;ptr2->coff!=NULL;ptr2=ptr2->link)
		{
			if(ptr->pow>ptr2->pow)
			{
				  temp1=ptr->coff;
				  temp2=ptr->pow;
				  ptr->coff=ptr2->coff;
				  ptr->pow=ptr2->pow;
				  ptr2->coff=temp1;
				  ptr2->pow=temp2;
			}
		 }
}


int sum()
{
   node=(next *)(sizeof(next));
   start3=node;
   ptr1=start1;
   ptr2=start2;
   while(ptr1!=NULL && ptr2!=NULL)
   {
	  ptr=node;
	  if  (ptr1->pow > ptr2->pow )
	  {
		  node->coff=ptr2->coff;
		  node->pow=ptr2->pow;
		  ptr2=ptr2->link;
	   }
	   else if ( ptr1->pow < ptr2->pow )
	  {
		  node->coff=ptr1->coff;
		  node->pow=ptr1->pow;
		  ptr1=ptr1->link;
	  }
	  else
	  {
		  node->coff=ptr2->coff+ptr1->coff;
		  node->pow=ptr2->pow;
		  ptr1=ptr1->link;
		  ptr2=ptr2->link;
	  }
	  node=(next *)(sizeof(next));
	  ptr->link=node;
	}

	if (ptr1==NULL)
	{
		while(ptr2!=NULL)
		{
			node->coff=ptr2->coff;
			node->pow=ptr2->pow;
			ptr2=ptr2->link;
			ptr=node;
			node=(next *)(sizeof(next));
			ptr->link=node;
		}
	}
	else if (ptr2==NULL)
	{
		while(ptr1!=NULL)
		{
			node->coff=ptr1->coff;
			node->pow=ptr1->pow;
			ptr1=ptr1->link;
			ptr=node;
			node=(next *)(sizeof(next));
			ptr->link=node;
		}
	}
	node=NULL;
	ptr->link=node;
}
