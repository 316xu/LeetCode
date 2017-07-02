
#include <iostream>
#include "LongestCommonPrefix.h"
#include "ValidParentheses.h"
#include "MergeTwoSortedLists.h"
#include "RemoveDuplicates.h"

using namespace std;
int main() {


    RemoveDuplicates r;
    vector<int> v(6);
    v[0]=1;
    v[1]=1;
    v[2] = 1;
    v[3] = 2;
    v[4] = 2;
    v[5] = 3;
    cout<<r.removeDuplicates(v);
    return 0;
}