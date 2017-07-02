//
// Created by xujifa on 17-7-2.
//

#ifndef CPLUSPLUS_REMOVEDUPLICATES_H
#define CPLUSPLUS_REMOVEDUPLICATES_H


#include <vector>
using namespace std;

class RemoveDuplicates {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() == 0) {
            return 0;
        }

        int pos = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]) {
                nums[pos++] = nums[i];
            }
        }


        return pos;
    }
};
#endif //CPLUSPLUS_REMOVEDUPLICATES_H
