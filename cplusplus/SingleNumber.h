//
// Created by xujifa on 17-7-8.
// 136

#ifndef CPLUSPLUS_SINGLENUMBER_H
#define CPLUSPLUS_SINGLENUMBER_H

#include <vector>
using namespace std;
class SingleNumber {
    int singleNumber(vector<int>& nums) {

        int result = 0;
        for (int i = 0; i < nums.size(); i++) {

            result ^= nums[i];
        }
        return result;
    }
};
#endif //CPLUSPLUS_SINGLENUMBER_H
