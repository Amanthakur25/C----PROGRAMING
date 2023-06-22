class Solution{
    public:
int findpos(int in[], int element, int inorderStart, int inorderEnd) {
        for (int i = inorderStart; i <= inorderEnd; i++) {
            if (in[i] == element) {
                return i;
            }
        }
        return -1;
    }

    Node* solve(int in[], int pre[], int& index, int inorderStart, int inorderEnd, int n) {
        if (index >= n || inorderStart > inorderEnd) {
            return NULL;
        }

        int element = pre[index++];
        Node* root = new Node(element);
        int pos = findpos(in, element, inorderStart, inorderEnd);

        root->left = solve(in, pre, index, inorderStart, pos - 1, n);
        root->right = solve(in, pre, index, pos + 1, inorderEnd, n);

        return root;
    }


Node* buildTree(int in[],int pre[], int n)
{
    // Code here
    int preorderIndex=0;
    Node *ans=solve(in,pre,preorderIndex,0,n-1,n);
    return ans;
}