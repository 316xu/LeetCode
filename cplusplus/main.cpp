
#include <iostream>
#include "IntersecList.h"
#include "TwoSum2.h"


using namespace std;
int main() {

    ListNode *c1 = new ListNode(1);
    ListNode *c2 = new ListNode(2);
    c1->next = c2;
    c2->next = nullptr;

    ListNode *a1 = new ListNode(3);
    ListNode *a2 = new ListNode(4);
    a1->next = a2;
    a2->next = c1;

    ListNode *b1 = new ListNode(5);
    ListNode *b2 = new ListNode(6);
    b1->next = b2;
    ListNode *b3 = new ListNode(7);
    b2->next = b3;
    b3->next = c1;

    TwoSum2 t;
    vector<int> a({-1, 0});
    t.twoSum(a, -1);

    return 0;
}