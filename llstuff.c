#include<stdio.h>
#include<stdlib.h>
struct student

{
	int rollno;
	struct student *next;
};

void recur_print(struct student *head)
{
	if(head->next!=NULL)
		recur_print(head->next);
	printf("%d\n",head->rollno);

}
void traversal_print(struct student *head)
{
  for(;head!=NULL;head=head->next)
    printf("%d\n",head->rollno);

}
/*struct student *insertion(struct student *node,struct student *head)
{
struct student *prev=head,*p=head->next;
if(node->rollno < head->rollno)
{node->next=head;
return node;
}
if(node->rollno <p->rollno)
{
head->next=node;
node->next=p;
return head;
}
p=p->next;
prev=p->next;
while(p!=NULL)
{
if(p->rollno > node->rollno)
{
prev->next=node;
node->next=p;
break;
}
p=p->next;
prev=prev->next;
}
return head;
}
*/
int main()
{
	struct student *prev=NULL,*p=NULL,*head=NULL;
	
int i;
//head->next=NULL;
    for(i=0;i<5;i++)
    {
p=(struct student *)malloc(sizeof(struct student));
       printf("enter student rollno! ");
       scanf("%d",&(p->rollno));
       p->next=NULL;
      if(head==NULL)
       	{
       		head=p;
       		prev=head;
        }
    
    	prev->next=p;
    	prev=p;
     //p->next=NULL;
     
    }
free(p);
traversal_print(head);
//struct student *newnode=(struct student *)malloc(sizeof(struct student));
//printf("enter the node you want to insert? ");
//scanf("%d",&(newnode->rollno));
//newnode->next=NULL;

//head=insertion(newnode,head);
//printf("the node at head is %d\n",head->rollno);
//printf("After insertion \n \n");  
//recur_print(head);
//struct student *temp=(struct student *)malloc(sizeof(struct student));
//for(temp=head;temp!=NULL;temp=temp->next)
//printf("%d\n",temp->rollno);
//printf("\nhello\n");
return 0;
}
