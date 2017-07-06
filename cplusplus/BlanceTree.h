//
// Created by xujifa on 17-7-7.
// 110

#ifndef CPLUSPLUS_BLANCETREE_H
#define CPLUSPLUS_BLANCETREE_H

#include <clocale>
#include <math.h>
#include <cmath>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BlanceTree {
    public:
    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        int v = height(root->left) - height(root->right);

        return abs(v) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }

    int height(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }

        int heightL = height(root->left);
        int heightR = height(root->right);

        return (heightL > heightR ? heightL : heightR) + 1;
    }
};

#endif //CPLUSPLUS_BLANCETREE_H
