//
// Created by xujifa on 17-7-2.
// 83
//

#ifndef CPLUSPLUS_REMOVEDUPLICATES_H
#define CPLUSPLUS_REMOVEDUPLICATES_H


#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class RemoveDuplicates2 {

public:
    ListNode *deleteDuplicates(ListNode *head) {

        if (head == nullptr) {
            return head;
        }

        ListNode* pre = head;
        ListNode* now = pre->next;
        while(now != nullptr) {
            if (now->val == pre->val) {

                pre->next = now->next;
            } else {
                pre = now;
            }
            now = now -> next;
        }
        return head;


    }
};

#endif //CPLUSPLUS_REMOVEDUPLICATES_H
