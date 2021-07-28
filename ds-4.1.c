#include <stdio.h>
#include <stdlib.h>
#define Max 50
void insert();
void delete();
void display();
int data[Max];
int front = -1;
int rear = -1;
int main()
{
 int ch;
 while(1)
 {
 printf("1.Insert element in queue \n"); 
 printf("2.delete element in queue \n");
 printf("3.display elements of queue \n");
 printf("quite \n");
 printf("Enter your choice\t");
 scanf("%d", &ch);
 switch(ch)
 {
 case 1: insert();
 break;
 case 2: delete();
 break; case 3: display();
 break;
 case 4: printf("your done\n");
 exit(1);
 break;
 case 5: printf("you entered wrong choice\n");
 }
 printf("\n");
}
 }
void insert()
{
 int item;
 if (rear==Max-1)
 printf("queue is full\n");
 else
 {
 if(front==-1)
 front=0;
 printf("Enter element in queue\t");
 scanf("%d",&item);
 rear++;
 data[rear]=item;
 }
}
void delete()
{
 if(front==-1|| front>rear) printf("queue is empty\n");
 else
 {
 printf("element delete from queue is %d \n",data[front]);
 front++;
 }
}
void display()
{
 int i;
 if(front==-1)
 printf("queue is empty\n");
 else
 {
 for(i=front;i<=rear;i++)
 {
 printf("%d \n",data[i]); 
 }
 printf("\n");
}
}
