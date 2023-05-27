#include <iostream>
using namespace std;
class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};
class BST
{
    TreeNode *root;
    BST()
    {
        root = NULL;
    }

    bool isEmpty()
    {
        if (root = NULL)
            return true;
        else
            return false;
    }

    void Insert(TreeNode *new_node)
    {
        if (root == NULL)
        {
            root = new_node;
            cout << "Value Inserted at root node";
        }
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (new_node->value == root->value)
                {
                    cout << "Duplicate values are not allowed";
                    return;
                }
                else if ((new_node->value < temp->value) && (temp->left == NULL))
                {
                    temp->left = new_node;
                    cout << "value inserted";
                    break;
                }
                else if(new_node->value<temp->value)
                {
                    temp=temp->left;
                }
                else if((new_node->value > temp->value) && (temp->right == NULL))
                {
                    temp->right=new_node;
                    cout<<"value inserted";
                    break;
                }
                else
                {
                    temp=temp->right;
                }
            }
        }
    }
};
int main()
{
    int option;
    do
    {
        cout << "What Option Do you what to perform ?" << endl;
        cout << "Select The option Or 0 to exit " << endl;
        cout << "1 to Insert Node " << endl;
        cout << "2 to Scearch node" << endl;
        cout << "3 to delete node" << endl;
        cout << "4 to print BST value" << endl;
        cout << "5 to clear screen " << endl;
        cout << "0 to exit" << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Insert" << endl;
            break;
        case 2:
            cout << "Scearch" << endl;
            break;
        case 3:
            cout << "Delete" << endl;
            break;
        case 4:
            cout << "Print " << endl;
            break;
        case 5:
            cout << "Clear" << endl;
            system("cls");
            break;
        default:
            cout << "enter the correct option" << endl;
            break;
        }
    } while (option != 0);
}