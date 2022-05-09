#include<iostream>
#include<conio.h>

using namespace std;

class node{
	public:
		int data;
		node* left,* right;
		node(int value){
			this->data = value;
			this->left = NULL;
			this->right = NULL;
		}
};
int height(node* node);
void currentlevel(node* root, int level){
	if(root == NULL) return;
	if(level == 1) cout<<root->data<<" ";
	else if(level > 1){
		currentlevel(root->left, level-1);
		currentlevel(root->right, level-1);
	}
	getch();
}
void levelorder(node* root){
	int h = height(root);
	int i;
	for(i = 1; i <=h; i++){
		currentlevel(root, i);
	}
	getch();
}
int height(node* node){
	if(node == NULL) return 0;
	else{
		int lheight = height(node->left);
		int rheight = height(node->right);
		if(lheight > rheight){
			return (lheight + 1);
		}
		else return (rheight + 1);
	}
}
int main(){
	node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	cout<<"The level order traversal of the tree is:"<<endl;
	levelorder(root);	
}
