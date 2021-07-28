/*set B
1) Write a C program to merge two sorted linked list.
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
struct node *first=0,*sec=0,*mergell=0;
int size=0;
int main()
{
    printf("\ncreate the first link list:\n");
    first= create();
    printf("\ncreate the second link list:\n");
    sec=  create();
    printf("\ndisplay the first link list:\n");
    display(first);
    printf("\ndisplay the sec link list:\n");
    display(sec);
    mergell= merged(first,sec);
    printf("\n Merged the link list:\n");
    display(mergell);

}
 merged(struct node *first,struct node *sec)
{
    struct node *top;

    
        if(first==0)
        {
            return sec;
        }
        else if(sec==0)
        {
            return first;
        }
         if(first->data < sec->data)
         {
             top=temp=first;
             first=first->next;
         }
         else
         {
             top=temp=sec;
             sec=sec->next;
         }
         while(first!=0 && sec!=0)
        {
            if(first->data<sec->data)
            {
                temp->next=first;
                first=first->next;
            }
            else
            {
                temp->next=sec;
                sec=sec->next;
            }
            temp=temp->next;
        }
        if(first!=0)
        {
            while(first!=0)
            {
                temp->next=first;
                first=first->next;
                temp=temp->next;
            }
        }
        if(sec!=0)
        {
            while(sec!=0)
            {
                temp->next=sec;
                sec=sec->next;
                temp=temp->next;
            }
        }
        return top;
}
create()
{

    int key=1;
    head=0;
    while(key)
    {
    newnode=(struct node *)malloc(sizeof(struct node));

    printf("Enter the element:- ");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("\ndo you want to add another node(0,1) ");
    scanf("%d",&key);
    size++;
    }
    return head;
}
void display(struct node *head)
{
    int count =1;
    temp=head;
    if(size==0)
    {
        printf("invalid input!");
    }
    else
    {
    while(temp!=0)
    {
        
        printf("\ndata %d- %d",count,temp->data);
        count++;
        temp=temp->next;
    }
    }
    
}


