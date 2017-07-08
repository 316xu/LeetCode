//
// Created by xujifa on 17-7-8.
// 160

#ifndef CPLUSPLUS_INTERSECLIST_H
#define CPLUSPLUS_INTERSECLIST_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class IntersectList {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }

        int al = 1;
        ListNode *a = headA;
        while (a != nullptr) {
            a = a->next;
            al++;
        }

        int bl = 1;
        ListNode *b = headB;
        while (b != nullptr) {
            b = b->next;
            bl++;
        }

        int max;
        int min;
        ListNode *l, *n;
        if (al > bl) {
            max = al;
            min = bl;
            l = headA;
            n = headB;
        } else {
            max = bl;
            min = al;
            l = headB;
            n = headA;
        }

        for (int i = 0; i < max - min; i++) {
            l = l->next;
        }

        while (l != nullptr) {
            if (l == n) {
                return l;
            }
            l = l->next;
            n = n->next;
        }
        return nullptr;
    }
};

#endif //CPLUSPLUS_INTERSECLIST_H
