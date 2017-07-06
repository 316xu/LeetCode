
#include <iostream>

#include "SortedArrayToBST.h"

using namespace std;
int main() {

    ArrayToBST a;
    TreeNode treeNode(1);
    treeNode.left = new TreeNode(2);
    treeNode.right = new TreeNode(3);
    vector<int>v(1);
    v[0]=1;
    cout << a.sortedArrayToBST(v);
    return 0;
}