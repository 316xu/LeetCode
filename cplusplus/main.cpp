
#include <iostream>
#include "BlanceTree.h"
#include "PascalTriangle2.h"


using namespace std;
int main() {

    BlanceTree b;
    TreeNode treeNode(1);
    treeNode.left = new TreeNode(2);
    PascalTriangle2 p;
//    treeNode.right = new TreeNode(3);
    p.getRow(3);
    return 0;
}