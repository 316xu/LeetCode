//
// Created by xujifa on 17-7-13.
// 198
// TODO 这题很重要，一种思想，没有过多的考虑具体的逻辑，用一种很抽象的方式解答

#ifndef CPLUSPLUS_HOUSEROBBER_H
#define CPLUSPLUS_HOUSEROBBER_H

#include <vector>
#include <cmath>

using namespace std;

class HouseRobber {
public:
    int rob(vector<int> &nums) {
        int prevRob;
        int prevNoRob;
            int rob;
        for (int i = 0; i < nums.size(); i++) {
            rob = prevNoRob + nums[i];
            prevNoRob = max(prevRob, prevNoRob);
            prevRob = rob;
        }
        return max(prevNoRob, prevRob);
    }
};

#endif //CPLUSPLUS_HOUSEROBBER_H
