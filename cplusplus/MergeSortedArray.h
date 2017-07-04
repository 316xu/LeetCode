//
// Created by xujifa on 17-7-5.
// 88

#ifndef CPLUSPLUS_MERGESORTEDARRAY_H
#define CPLUSPLUS_MERGESORTEDARRAY_H

#include <vector>
using namespace std;
class MergeSortedArray {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pos = m + n - 1;
        int i = m - 1, j = n - 1;
        while (j >= 0 && i >= 0) {
            nums1[pos--] = nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
        }

        while (i>=0) {
            nums1[pos--] = nums1[i--];
        }
        while (j>=0) {
            nums1[pos--] = nums2[j--];
        }
    }
};
#endif //CPLUSPLUS_MERGESORTEDARRAY_H
