//
// Created by xujifa on 17-7-4.
//

#ifndef CPLUSPLUS_MAXIMUMSUBARRAY_H
#define CPLUSPLUS_MAXIMUMSUBARRAY_H

#include <vector>
using namespace std;
class MaximumSubArray {
public:
    int maxSubArray(vector<int> &nums) {

        int* maxs = new int[nums.size()];
        maxs[0] = nums[0];
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++) {

            maxs[i] = nums[i] + (maxs[i - 1] > 0 ? maxs[i - 1] : 0);
            res = max(res, maxs[i]);
        }
        return res;
    }
};

#endif //CPLUSPLUS_MAXIMUMSUBARRAY_H
