/*
@author Anurag Goel
Inserting at nth position and Traversing the elements of linked list.
*/
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
int main()
{
struct Node
{
int data;
Node *next;
};
char choice;
Node *head,*tail,*temp;
head=NULL;
int length=0;
do{
printf("Enter a element to insert.");
temp=(Node*)malloc(sizeof(Node));
temp->next=NULL;
scanf("%d",&temp->data);
if(head==NULL)
{
tail=head=temp;
}else
{
tail->next=temp;
tail=temp;
}
fflush(stdin);
printf("Do you want to continue (Y) or (N)");
scanf("%c",&choice);
length++;
}while((choice=='Y')||(choice=='y'));

Node *node,*varNode;
int count=1,pos,data;
temp=head;
node=(Node*)malloc(sizeof(Node));
printf("Enter position between 1 to %d & data to insert : ",(length+1));
scanf("%d %d",&pos,&data);
node->data=data;
if(pos==1){
node->next=head;
head=node;
}
else{
while(count<pos-1)
{
temp=temp->next;
count++;
}
varNode=temp->next;
temp->next=node;
node->next=varNode;
}

temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
getch();
return 0;
}