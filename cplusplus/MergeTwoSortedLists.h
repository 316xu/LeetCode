//
// Created by xujifa on 17-7-2.
// 21
//

#ifndef CPLUSPLUS_MERGETWOSORTEDLISTS_H
#define CPLUSPLUS_MERGETWOSORTEDLISTS_H


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class MergeTwoSortedLists {

public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {

        ListNode *head = new ListNode(0);
        ListNode *index = head;
        while (l1 != nullptr && l2 != nullptr) {

            if (l1->val < l2->val) {
                index->next = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                index->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            index = index -> next;
        }

        if (l1 != nullptr) {
            index->next = l1;
        } else if (l2 != nullptr) {
            index->next = l2;
        }

        return head->next;
    }
};

#endif //CPLUSPLUS_MERGETWOSORTEDLISTS_H
