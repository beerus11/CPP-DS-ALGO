#include<iostream>
using namespace std;
//Binary Tree Node
struct Node{
	int value;
	struct Node *left;
	struct Node *right;
};

Node * newNode(int k){
	Node *temp = new Node;
	temp->value=k;
	temp->left=temp->right=NULL;
	return temp;
}

struct Node * findLCA(struct Node *root,int n1,int n2){
	if(root==NULL){
		return NULL;
	}
	if(root->value==n1 || root->value==n2){
		return root;
	}
	Node *left=findLCA(root->left,n1,n2);
	Node *right=findLCA(root->right,n1,n2);
	if(left && right) return root;
	return (left!=NULL)?left:right;
}

int main(){
	Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->value;
    cout << "\nLCA(4, 6) = " << findLCA(root, 4, 6)->value;
    cout << "\nLCA(3, 4) = " << findLCA(root, 3, 4)->value;
    cout << "\nLCA(2, 4) = " << findLCA(root, 2, 4)->value;
    return 0;
}