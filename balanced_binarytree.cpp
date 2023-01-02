#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	int value;
	TreeNode *left, *right;

	TreeNode(int val)
	{
		this->value = val;
		this->left = this->right = NULL;
	}
};
//bool isbalanced(TreeNode* root)
//return dfsHeight(root)!=-1;

int dfsHeight(TreeNode *root)
{

    if(root==NULL)return 0;
    int leftHeight=dfsHeight(root->left);
    if(leftHeight==-1)return -1;
    int rightHeight = dfsHeight(root->right);
    if(rightHeight==-1)return -1;

    if(abs(leftHeight-rightHeight)>1)return -1;
    return max(leftHeight, rightHeight)+1;
}
int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout<<dfsHeight(root);

}
