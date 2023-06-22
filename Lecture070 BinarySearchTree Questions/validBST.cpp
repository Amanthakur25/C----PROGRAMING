#include <iostream>
#include <limits.h>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};
bool isBST(Node *root, int min, int max)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data >= min && root->data <= max)
    {
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);
    }
    else
    {
        return false;
    }
}
int main()
{
    Node *root = new Node(5);
    isBST(root, INT_MIN, INT_MAX);
}