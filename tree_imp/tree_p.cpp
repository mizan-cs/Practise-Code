#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    struct node *left_child,*right_child;
};



node *newNode(int value)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->key = value;
    temp->left_child = temp->right_child = NULL;
    return temp;
}

node* insertItem(node* node, int item)
{
    if(node == NULL) return newNode(item);

    if(item < node->key){
         node->left_child = insertItem(node->left_child,item);
    }else if(item > node->key){
        node->right_child = insertItem(node->right_child,item);
    }

    return node;
}

void inorder(node *root)
{
    if(root != NULL)
    {
        cout<<root->key<<" ";
        inorder(root->left_child);
        inorder(root->right_child);
    }
}


int main()
{
    node *root = NULL;
    root = insertItem(root,30);
    insertItem(root,20);
    insertItem(root,40);
    insertItem(root,70);
    insertItem(root,60);
    insertItem(root,80);

    inorder(root);



}
