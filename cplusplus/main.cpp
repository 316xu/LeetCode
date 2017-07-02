
#include <iostream>
#include "LongestCommonPrefix.h"
#include "ValidParentheses.h"
#include "MergeTwoSortedLists.h"

using namespace std;
int main() {

    MergeTwoSortedLists m;
    ListNode *a = new ListNode(2), *b = new ListNode(1);
    m.mergeTwoLists(a, b);

    return 0;
}