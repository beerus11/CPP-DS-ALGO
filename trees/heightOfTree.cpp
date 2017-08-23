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
int heightofTree(struct Node* root){
	if(root==NULL)
		return 0;
	int left = heightofTree(root->left);
	int right=heightofTree(root->right);
	return max(left,right)+1;
}

int main(){
	struct Node* root = newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	root->right->left=newNode(6);
	root->right->right=newNode(7);
	cout<<"Height of Tree is :: "<<heightofTree(root);
	return 0;
}