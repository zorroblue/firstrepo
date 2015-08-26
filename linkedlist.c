// a sample program implementing insertion,deletion and what not in a linked list
#include<stdio.h>
#include<stdlib.h>

struct comp 
{
int x,y;
struct comp *next;
};

typedef struct comp comp;

comp *insert_node(comp *head)
{
comp *p;
p=(comp *)malloc(sizeof(comp));
printf("enter the value of x and y ");
scanf("%d %d",&(p->x),&(p->y));
if(head==NULL)
head=p;
else
{
comp *last;
last=(comp *)malloc(sizeof(comp));
last=head;
while(last->next!=NULL) //finding the last element in the linked list
last=last->next;
last->next=p;
}
free(p);
//free(last);
return head;
}

comp *delete_node(comp *head,comp *node)
{
	comp *prev,*p;
    if(head->next==NULL && head==node) // if there is only one node in the list and is to be deleted
    {
    head=NULL; // all nodes are deleted
    return head;
    }
    if(head->next ==NULL)
    	{
    		printf("Node not found\n");
            return -1;
       }

}
int main()
{
comp *head=NULL,*p;
int n;
printf("WELCOME TO LINKED LIST WORLD!! WHAT DO YOU WANT TO DO?? \n");
while(1)
{
printf("1.insert a new node 2. delete a node 3.print the list 4.print the list backwards 5.exit\n\n");

int choice;
scanf("%d",&choice);
if(choice==5)
break;
switch(choice)
{
case 1:
insert_node(head);
break; 
case 2:
delete_node(node);
break;
}
}
return 0;
}
