
#include <iostream>
#include "BlanceTree.h"


using namespace std;
int main() {

    BlanceTree b;
    TreeNode treeNode(1);
    treeNode.left = new TreeNode(2);
//    treeNode.right = new TreeNode(3);
    cout << b.isBalanced(&treeNode);
    return 0;
}