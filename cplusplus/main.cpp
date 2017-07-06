
#include <iostream>
#include "BlanceTree.h"
#include "PascalTriangle.h"


using namespace std;
int main() {

    BlanceTree b;
    TreeNode treeNode(1);
    treeNode.left = new TreeNode(2);
    PascalTriangle p;
//    treeNode.right = new TreeNode(3);
    p.generate(3);
    return 0;
}