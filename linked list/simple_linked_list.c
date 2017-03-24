/*
@author Anurag Goel
Inserting and Traversing the elements of linked list.
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
Node *head,*tail,*temp;
char choice;
head=NULL,temp=NULL;
int length=0;
do{
printf("Enter a element to insert.");
temp=(Node*)malloc(sizeof(Node));
scanf("%d",&temp->data);
temp->next=NULL;
if(head==NULL)
{
tail=head=temp;
}else{
tail->next=temp;
tail=temp;
}
fflush(stdin);
printf("Do you want to continue (Y) or (N)");
scanf("%c",&choice);
length++;
}while((choice=='Y')||(choice=='y'));

printf("Printing all elements of linked list");
while(head!=NULL)
{
printf("%d\n",(head->data));
head=head->next;
}
//getch();
return 0;
}


