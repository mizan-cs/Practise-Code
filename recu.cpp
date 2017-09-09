#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
};

node* newNode(int data)
{
     node* node = (struct node*)malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return node;
}

void printPostorder(struct node* node)
{
     if (node == NULL)
        return;

     // first recur on left subtree
     printPostorder(node->left);

     // then recur on right subtree
     printPostorder(node->right);

     // now deal with the node
     printf("%d ", node->data);
}

int main()
{
     node *root;
     *root = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5);

     return 0;
}
