//
// Created by xujifa on 17-7-8.
// 167

#ifndef CPLUSPLUS_TWOSUM2_H
#define CPLUSPLUS_TWOSUM2_H

#include <vector>

using namespace std;

class TwoSum2 {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {

        int l = 0, h = numbers.size() - 1;

        while (l < h) {
            int sum = numbers[l] + numbers[h];
            if (sum == target) {
                return vector<int>({l + 1, h + 1});
            } else if (sum > target) {
                h--;
            } else {
                l++;
            }
        }
        return vector<int>({0, 0});

    }
};

#endif //CPLUSPLUS_TWOSUM2_H
