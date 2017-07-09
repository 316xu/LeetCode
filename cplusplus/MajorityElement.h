//
// Created by xujifa on 17-7-9.
// 169
// 参考答案，moore voting algorithm，思想是每次从数组中删去一对不同的值，如果有 majority element，那一定会在最后被剩下

#ifndef CPLUSPLUS_MAJORITYELEMENT_H
#define CPLUSPLUS_MAJORITYELEMENT_H

#include <vector>

using namespace std;

class MajorityElement {
public:
    int majorityElement(vector<int> &nums) {
        int maj = 0;
        int count = 1;

        for (int i = 0; i < nums.size(); i++) {

            nums[maj] == nums[i] ? count++ : count--;
            if (count == 0) {
                maj = i;
                count = 1;
            }
        }
        return nums[maj];
    };
};

#endif //CPLUSPLUS_MAJORITYELEMENT_H
