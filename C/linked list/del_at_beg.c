/*
@author Anurag Goel
Delete Node at beginning and Traversing the elements of linked list.
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
}while((choice=='Y')||(choice=='y'));
printf("Linked List after Deleting first element at beginning : ");
Node *p=head;
head=head->next;
free(p);
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
getch();
return 0;
}