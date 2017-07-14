#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int value;
	struct Node *left;
	struct Node *right;
};

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)
                         malloc(sizeof(struct Node));
    node->value = data;
    node->left = NULL;
    node->right = NULL;
 
    return node;
}

struct Node * sortedArrayToBST(int arr[],int start , int end){
	if(start>end)
		return NULL;
	int mid = (start+end)/2;
	struct Node *root = newNode(arr[mid]);
	root->left = sortedArrayToBST(arr,start,mid-1);
	root->right = sortedArrayToBST(arr,mid+1,end);
    return root;

}
//Print Tree in preOrder
void preOrder(struct Node* node)
{
    if (node == NULL)
        return;
    cout<< node->value;
    preOrder(node->left);
    preOrder(node->right);
}


int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    /* Convert List to BST */
    struct Node *root = sortedArrayToBST(arr, 0, n-1);
    cout << "\n PreOrder Traversal of constructed BST ";
    preOrder(root);
 
    return 0;
}