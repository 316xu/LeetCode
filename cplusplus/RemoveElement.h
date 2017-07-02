//
// Created by xujifa on 17-7-3.
//
#include <vector>

#ifndef CPLUSPLUS_REMOVEELEMENT_H
#define CPLUSPLUS_REMOVEELEMENT_H
using namespace std;

class RemoveElement {
public:
    int removeElement(vector<int> &nums, int val) {

        int pos = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[pos++] = nums[i];
            }
        }
        return pos;
    }
};

#endif //CPLUSPLUS_REMOVEELEMENT_H
