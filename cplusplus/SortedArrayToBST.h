//
// Created by xujifa on 17-7-7.
// 108

#include <vector>
#include <queue>
#include <clocale>

using namespace std;
#ifndef CPLUSPLUS_SORTEDARRAYTOBST_H
#define CPLUSPLUS_SORTEDARRAYTOBST_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class ArrayToBST {
public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        if (nums.size() == 0) {
            return NULL;
        }

        if (nums.size() == 1) {
            return new TreeNode(nums[0]);
        }

        int middle = nums.size() / 2;

        vector<int> left(nums.begin(), nums.begin() + middle);
        vector<int> right(nums.begin() + middle + 1, nums.end());
        TreeNode *root = new TreeNode(nums[middle]);
        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);

        return root;
    }
};

#endif //CPLUSPLUS_SORTEDARRAYTOBST_H
