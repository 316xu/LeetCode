
#include <iostream>
#include "LongestCommonPrefix.h"
#include "ValidParentheses.h"
#include "MergeTwoSortedLists.h"
#include "RemoveDuplicates.h"
#include "RemoveElement.h"

using namespace std;
int main() {


    RemoveElement r;
    vector<int> v(4);
    v[0]=3;
    v[1]=1;
    v[2] = 1;
    v[3] = 3;
//    v[4] = 2;
//    v[5] = 3;
    cout<<r.removeElement(v, 3);
    return 0;
}