//
// Created by xujifa on 17-7-8.
// 141

#ifndef CPLUSPLUS_LISTCYCLE_H
#define CPLUSPLUS_LISTCYCLE_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class ListCycle {
public:
    bool hasCycle(ListNode *head) {

        ListNode *now = head;
        while (now != nullptr) {
            if (now->val == 1) {
                return true;
            }
            now->val = 1;
            now = now->next;
        }
        return false;

    }
};

#endif //CPLUSPLUS_LISTCYCLE_H
