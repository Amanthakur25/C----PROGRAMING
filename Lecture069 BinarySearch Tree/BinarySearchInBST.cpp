//Recursive Way
#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};
Node *insertIntoBST(Node *root, int d){
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

bool searchInBST(Node *root, int X)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == X)
    {
        return true;
    }
    if(root->data>X)
    {
        return searchInBST(root->left,X);
    }
    else{
        return searchInBST(root->right,X);
    }
}
int main()

{
    return 0;
}