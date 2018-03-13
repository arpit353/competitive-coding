#include <bits/stdc++.h>
using namespace std;

int total_height = 0;

struct Node
{
    int data;
    Node *left, *right;
};

Node* newNode(int key)
{
    Node* node = new Node;
    node->data = key;
    node->left = node->right = nullptr;

    return node;
}

void inorder(Node* root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


void insert(Node* &root, int key)
{

    if (root == nullptr)
    {
        root = newNode(key);
        return;
    }

    if (key < root->data)
        insert(root->left, key);
    else if( key > root->data )
        insert(root->right, key);
}

int height(Node* root)
{

    if (root == nullptr)
        return 0;

    int l = height(root->left);
    int r = height(root->right);

    //cout<<root->data<<" "<<max(l,r) + 1<<"\n";

    total_height = total_height + max(l,r);

    return max(l,r) + 1;
}

int main()
{
    Node* root = nullptr;

    int n;
    cin>>n;

    int keys[n];

    for(int i=0;i<n;i++)
        cin>>keys[i];

    for (int key : keys)
        insert(root, key);

    int h = height(root);

    cout<<h-1<<"\n"<<total_height;

    return 0;
}
