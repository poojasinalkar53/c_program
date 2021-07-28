/* Q 2 : Write a C program to implement a doubly linked list. The
program should be menu driven with the following options: 1.create 2.insert 3.display 
4. Search  5.delete(by value ) 6.delete(by position).
*/

#include<stdio.h>
#include<stdlib.h>
void create();
void insert();
void insert_start();
void insert_position();
void insert_end();
void delete_data();
void delete_start();
void delete_end();
void delete_position();
void display();
void search();


int size=0;
 struct node
    {
        int roll_no;
        char name[25];
        int age;
        struct node *next;
        struct node *prev;
    };
      struct node *head,*newnode,*temp;
int main()
{
    printf("Program to create your link list & print it \n");
    int choice;
    loop:
    {
    printf("\nEnter 0 if you are done: ");
    printf("\nEnter 1 to create a linklist;");
    printf("\nEnter 2 to insert a node: ");
    printf("\nEnter 3 to display data: ");
    printf("\nEnter 4 to delete data: ");
    printf("\nEnter 5 to Search data:");
    printf("\nEnter 6 to find size of your list: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0:return 0;
        case 1: create( );
        break;

        case 2: insert();
        break ;

        case 3: display();
        break;

        case 4: delete_data();
        break;

        case 5:search();
        break;

       case 6:printf("\nSize of your list is= %d\n",size);
       break;

        default: printf("Error...! Enter valid number.");
        break;
    }
    }
    goto loop;
    return 0;
}
void create()
{

    int key=1;

    head=0;
    while(key)
    {
    newnode=(struct node *)malloc(sizeof(struct node));

    printf("Enter the roll number:- ");
    scanf("%d",&newnode->roll_no);
    fflush(stdin);
    printf("\nEnter name: ");
    scanf("%s",&newnode->name);
    fflush(stdin);
    printf("enter the age:");
    scanf("%d",&newnode->age);
    newnode->prev=0;
    newnode->next=0;

    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    printf("\ndo you want to add another node(0,1) ");
    scanf("%d",&key);
    size++;
    }
}
void insert()
{
    int x;
    printf("\nEnter 1 to add element at starting: ");
    printf("\nEnter 2 to add element at any position: ");
    printf("\nEnter 3 to add element at End: ");
    scanf("%d",&x);

    switch(x)
    {
        case 1:insert_start();
        break;

        case 2:insert_position();
        break;

        case 3:insert_end();
        break;

        default:printf("\nEnter the valid number");
        break;
    }
}
void insert_start()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter roll number- ");
    scanf("%d",&newnode->roll_no);
    fflush(stdin);
    printf("\nEnter name- ");
    scanf("%s",&newnode->name);
    fflush(stdin);
    printf("\nenter the age:");
    scanf("%d",&newnode->age);
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    size++;
}
void insert_position()
{
    int pos;
    int i=1;
    printf("\nEnter the position where you want to add data-  ");
    scanf("%d",&pos);

    temp=head;

    if(pos>=size)
    {
        printf("\nYour Entered Position is wrong\n");
    }
    else
    {
        while(i<(pos-1))
        {
            temp=temp->next;
            i++;
        }

        newnode=(struct node*)malloc(sizeof(struct node));

        printf("\nEnter the roll number- ");
        scanf("%d",&newnode->roll_no);
        fflush(stdin);
        printf("Enter name- ");
        scanf("%s",&newnode->name);
        fflush(stdin);
        printf("\nenter the age:");
        scanf("%d",&newnode->age);

        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;
        size++;
    }
}
void insert_end()
{
    struct node *tail;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter roll number- ");
    scanf("%d",&newnode->roll_no);
    fflush(stdin);
    printf("Enter name- ");
    scanf("%s",&newnode->name);
    fflush(stdin);
    printf("\nenter the age :");
    scanf("%d",&newnode->age);
    newnode->prev=0;
    newnode->next=0;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    size++;

}
void delete_data()
{
    int x;

    printf("\nEnter 1 to remove starting element:");
    printf("\nEnter 2 to remove at any position:");
    printf("\nEnter 3 to remove last element:");
    scanf("%d",&x);

    switch(x)
    {
    case 1:delete_start();
    break;

    case 2:delete_position();
    break;

    case 3:delete_end();
    break;

    default: printf("Enter the valid number!");
    break;
    }
}
void delete_start()
{
    if(size==0)
    {
        printf("\nYour list is Empty\n");
    }
    else
    {
    temp=head;
    head=head->next;
    head->prev=0;
    free(temp);
    size--;

    printf("\n1st Element is deleted");
    }
}
void delete_position()
{
    struct node *nextnode;
    int pos;
    int i=1;

    printf("\nEnter the position where you want to remove node: ");
    scanf("%d",&pos);

    if(pos>size)
    {
        printf("\nYour Enter position is not valid. \n");
    }
    else
    {
        temp=head;
        while(i<(pos))
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        printf("\n your %d element is deleted.\n",i);
        size--;
    }
}
void delete_end()
{
    struct node *tail;
    if(tail==0)
    {
        printf("\nlist is empty!");
    }
    else
    {
        temp=tail;
        tail=tail->prev;
        tail->next=0;
        free(temp);
    }
   

   printf("\nYour last Element is deleted\n");
   size--;

}
void search()
{
    int rollno,i=0;
    printf("\nEnter the Roll number: ");
    scanf("%d",&rollno);

    temp=head;
    while(temp!=0)
    {
        if(rollno==temp->roll_no)
        {
            printf("\n Name- %s",temp->name);
            printf("\nage-%d",temp->age);

            i++;
            break;
        }
        temp=temp->next;
    }
    if(i==0)
    {
        printf("\nYour Roll number is not in the list \n");
    }
}
void display()
{
    temp=head;
    if(size==0)
    {
        printf("\nList is empty\n");
    }
    else
    {

    while(temp!=0)
    {
        printf("\nrollNumber- %d",temp->roll_no);
        printf("\nName- %s",temp->name);
        printf("\nage-%d",temp->age);
        temp=temp->next;
    }
    }
}

