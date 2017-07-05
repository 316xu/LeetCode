//
// Created by xujifa on 17-7-5.
// 101

#ifndef CPLUSPLUS_SYMMETRICTREE_H
#define CPLUSPLUS_SYMMETRICTREE_H

#include <stack>
#include "MergeTwoSortedLists.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
using namespace std;
class SymmetricTree {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        return test(root->left, root->right);
    }

    bool test(TreeNode *left, TreeNode *right) {
        if ((left == nullptr) ^ (right == nullptr)) {
            return false;
        }

        if ((left == nullptr) && (right == nullptr)) {
            return true;
        }

        if (left->val != right->val) {
            return false;
        }

        return test(left->left, right->right) && test(left->right, right->left);
    }
};
#endif //CPLUSPLUS_SYMMETRICTREE_H
