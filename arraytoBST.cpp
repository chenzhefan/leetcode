#include "merge_sa.h"


TreeNode* arraytoBST(vector<int> &num, int begin, int end)
{
    if(begin > end)
    return NULL;
    if(begin == end)
        return new TreeNode(num[begin]);
    int mid = (begin+end+1)/2;
    TreeNode* root = new TreeNode(num[mid]);
    root->left=arraytoBST(num, begin, mid-1);
    root->right=arraytoBST(num,mid+1, end);
    return root;
}

TreeNode *sortedArrayToBST(vector<int> &num)
{
    return arraytoBST(num,0,num.size()-1);
}

void show_tree(TreeNode* root)
{
    if(root==NULL)
        return;
    show_tree(root->left);
    cout<<root->val<<" ";
    show_tree(root->right);
}

void test_SATB()
{
    vector<int> num;
    for(int i=0;i<16;i++)
    {
        num.push_back(i+2);
        cout<<num[i]<<" ";
    }
    cout<<endl;
    TreeNode* tn=new TreeNode(0);
    tn = sortedArrayToBST(num);
    show_tree(tn);
}
