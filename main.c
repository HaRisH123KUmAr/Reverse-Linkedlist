#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;struct node *next;};
struct node *head=NULL;
int l=0;
void create()
{struct node* temp =(struct node *) malloc (sizeof (struct node));
 struct node* p=head;
 printf("ENTER THE DATA: ");
 scanf ("%d",&temp->data);
  if (head == NULL)
    {head=temp;temp->next=NULL;}
 else
{while (p->next!= NULL)
{	p = p->next; }
      p->next=temp;
    temp->next=NULL;}
} 
void reverse()
{int temp;
struct node *p=head,*ptr=p;
while(p!=NULL)
{ ptr=p;
    while(ptr!=NULL)
   { temp=p->data;
    p->data=ptr->data;
    ptr->data=temp;
    ptr=ptr->next;
   }p=p->next;
}}
void display()
{struct node *p=head;
 while(p!=NULL)
{    printf("%d\t",p->data);
    p=p->next;
}
 }
void main()
{int choice ;
    do{
        printf("\n 1.Create \n 2.Reverse \n 3.Display \n TO exit press 0 \n");
       printf("Enter your choice:");
       scanf("%d",&choice);
        switch(choice)
        { case 1:
        create();break;
        case 2:
        reverse();break;
        case 3:
        display();break;
        default:
        printf("ENTER THE CHOICE WITHIN 1-3 \n");
        }}
        while(choice!=0);
        
    printf("END OF THE PROGRAM!!!");}

