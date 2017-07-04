//
// Created by xujifa on 17-7-5.
// 100

#ifndef CPLUSPLUS_SAMETREE_H
#define CPLUSPLUS_SAMETREE_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class SameTree {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {

        if (!isNodeSame(p, q)) {
            return false;
        }

        if (p == nullptr) {
            return true;
        }

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    bool isNodeSame(TreeNode *a, TreeNode *b) {

        if (a == nullptr && b == nullptr) {
            return true;
        }
        if ((a == nullptr) ^ (b == nullptr)) {
            return false;
        }
        if (a->val != b->val) {
            return false;
        }
        if ((a->left == nullptr) ^ (b->left == nullptr)) {
            return false;
        }
        if ((a->right == nullptr) ^ (b->right == nullptr)) {
            return false;
        }
        return true;
    }
};

#endif //CPLUSPLUS_SAMETREE_H
