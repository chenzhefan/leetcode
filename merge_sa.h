#ifndef MERGE_SA_H_INCLUDED
#define MERGE_SA_H_INCLUDED

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

void merge1(int A[], int m, int B[], int n);
void test_merge();
void merge2(int A[], int m, int B[], int n);

TreeNode* arraytoBST(vector<int> &num, int begin, int end);
TreeNode *sortedArrayToBST(vector<int> &num);
void test_SATB();

void rotate_matrix(vector<vector<int> > &matrix);

vector<int> plusOne(vector<int> &digits);
void test_plusOne();

#endif // MERGE_SA_H_INCLUDED
