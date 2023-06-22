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
        this->left = NULL;
        this->right = NULL;
    }
};

// using inorder traversal
int KthSmallestElement(Node *root, int i, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    int left = KthSmallestElement(root->left, i, k);

    if (left != -1)
    {
        return left;
    }

    i++;
    if (i == k)
    {
        return root->data;
    }

    return KthSmallestElement(root->right, i, k);
}

int main()
{
}