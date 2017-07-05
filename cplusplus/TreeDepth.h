//
// Created by xujifa on 17-7-6.
// 104

#ifndef CPLUSPLUS_TREEDEPTH_H
#define CPLUSPLUS_TREEDEPTH_H

#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
using namespace std;
class TreeDepth {
public:
    int maxDepth(TreeNode* root) {

        if (root == nullptr) {
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
#endif //CPLUSPLUS_TREEDEPTH_H
