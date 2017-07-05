//
// Created by xujifa on 17-7-6.
// 107

#include <vector>
#include <stack>
#include <queue>
#ifndef CPLUSPLUS_TREELEVELORDER_H
#define CPLUSPLUS_TREELEVELORDER_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

using namespace std;

class TreeLevelOrder {
    public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        stack<vector<int>> s;
        queue<TreeNode*> q;

        int depth = 0;
        if (root) {

            q.push(root);
        }

        while(!q.empty()) {
            vector<int> v(q.size());
            unsigned long size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode *f = q.front();
                q.pop();
                v[i] = f->val;
                if(f->left) {
                    q.push(f->left);
                }
                if (f->right) {
                    q.push(f->right);
                }
            }
            s.push(v);
        }

        unsigned long size = s.size();
        vector<vector<int>> result(size);

        unsigned long ssize = s.size();
        for (int i = 0; i < ssize; i++) {
            result[i] = s.top();
            s.pop();
        }
        return result;
    }
};
#endif //CPLUSPLUS_TREELEVELORDER_H
