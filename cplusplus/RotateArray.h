//
// Created by xujifa on 17-7-11.
// 189

#ifndef CPLUSPLUS_ROTATEARRAY_H
#define CPLUSPLUS_ROTATEARRAY_H

#include <vector>
using namespace std;
class RotateArray {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k % n;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }

    void reverse(vector<int>&nums, int start, int end) {

        int a = 0;
        while (start < end) {
            a = nums[start];
            nums[start] = nums[end];
            nums[end] = a;
            start++;
            end--;
        }
    }
};

#endif //CPLUSPLUS_ROTATEARRAY_H
