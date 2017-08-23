#include<iostream>
#include <algorithm> 
#include <stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node* newNode(int data){
	struct Node* node=(struct Node*)malloc(sizeof(Node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

void inOrderTraversal(struct Node* root){
	if(root==NULL)
		return;
	struct Node* temp = root;
	inOrderTraversal(temp->left);
	cout<<temp->data;
	inOrderTraversal(temp->right);
}
void delTree(struct Node* root){
	if(root==NULL)
		return ;
	delTree(root->left);
	delTree(root->right);
	cout<<"Deleting Node :: "<<root->data<<endl;
	free(root);
}

int main(){
	struct Node* root = newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	root->right->left=newNode(6);
	root->right->right=newNode(7);
	delTree(root);
	return 0;
}