#include <iostream>
#include <stdlib.h>
using namespace std;

struct tree {
int data;
struct tree *left;
struct tree *right;
};

struct tree *root = NULL;

void insertTree(struct tree **node,int data) {
struct tree *temp = NULL;
if ((*node) == NULL) {
temp = (tree*) malloc(sizeof(tree));
temp->data = data;
temp->left = temp->right = NULL;
*node = temp;
} else if(data < (*node)->data){
insertTree(&(*node)->left, data);
} else if(data > (*node)->data){
insertTree(&(*node)->right, data); }
}

void deleteTree(struct tree **node){
if(*node){
deleteTree(&(*node)->left);
deleteTree(&(*node)->right);
delete (*node);
}
}

void printCurrentLevel(struct tree* root, int level)
{
if (root == NULL)
return;
if (level == 0)
cout << root->data << " ";
else if (level > 0) {
printCurrentLevel(root->left, level - 1);
printCurrentLevel(root->right, level - 1);
}
}

void breadthFirstTraversal(struct tree* root, int levelHeight)
{
int h = levelHeight;
for (int i = 0; i <= h; i++)
printCurrentLevel(root, i);
}

void preorder(struct tree* node){
if(node){
cout << node->data << " ";
preorder(node->left);
preorder(node->right);
}
}

void inorder(struct tree* node){
if(node){
inorder(node->left);
cout << node->data << " ";
inorder(node->right);
}
}

void postorder(struct tree* node){
if(node){
postorder(node->left);
postorder(node->right);
cout << node->data << " ";
}
}

int main() {
insertTree(&root, 8);
insertTree(&root, 3);
insertTree(&root, 1);
insertTree(&root, 10);
cout << root->data << endl;
cout << root->left->data << endl;
cout << root->left->left->data << endl;
cout << root->right->data << endl;

deleteTree(&root);
cout << root->data << endl;
cout << "Breadth First Traversal \n";
insertTree(&root, 8);
insertTree(&root, 3);
insertTree(&root, 1);
insertTree(&root, 6);
insertTree(&root, 10);
breadthFirstTraversal(root, 3);
cout<<endl;
cout << "Preorder \n";
insertTree(&root, 8);
insertTree(&root, 3);
insertTree(&root, 1);
insertTree(&root, 6);
insertTree(&root, 10);
preorder(root);
cout<<endl;
cout << "Inorder \n";
insertTree(&root, 8);
insertTree(&root, 3);
insertTree(&root, 1);
insertTree(&root, 6);
insertTree(&root, 10);
inorder(root);
cout<<endl;
cout << "Postorder \n";
insertTree(&root, 8);
insertTree(&root, 3);
insertTree(&root, 1);
insertTree(&root, 6);
insertTree(&root, 10);
postorder(root);

return 0;
}
