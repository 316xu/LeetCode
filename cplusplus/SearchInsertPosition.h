//
// Created by xujifa on 17-7-3.
//
#include <vector>
using namespace std;
#ifndef CPLUSPLUS_SEARCHINSERTPOSITION_H
#define CPLUSPLUS_SEARCHINSERTPOSITION_H
class SearchInsertPosition {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= target) {
                return i;
            }
        }
        return (int) nums.size();
    }
};
#endif //CPLUSPLUS_SEARCHINSERTPOSITION_H
