
#include <iostream>
#include "LongestCommonPrefix.h"
#include "ValidParentheses.h"
#include "MergeTwoSortedLists.h"
#include "RemoveDuplicates.h"
#include "RemoveElement.h"
#include "ImplementStrStr.h"
#include "CountAndSay.h"
#include "MaximumSubarray.h"
#include "LengthOfLastword.h"
#include "AddBinary.h"
#include "ClimbStairs.h"
#include "TreeLevelOrder.h"

using namespace std;
int main() {

    TreeLevelOrder t;
    TreeNode treeNode(1);
    treeNode.left = new TreeNode(2);
    treeNode.right = new TreeNode(3);
    cout << t.levelOrderBottom(&treeNode)[0][0];
    return 0;
}