//
// Created by xujifa on 17-7-4.
// 70
// TODO: 动态规划，好好体会
//

#ifndef CPLUSPLUS_CLIMBSTAIRS_H
#define CPLUSPLUS_CLIMBSTAIRS_H

#include <iostream>


class ClimbStairs {
public :
    int climbStairs(int n) {
        int count = 0;

        int c1 = 1; int c2 = 0;
        while (n--) {
            count = c1 + c2;
            c2 = c1;
            c1 = count;
        }

        return count;
    }


};
#endif //CPLUSPLUS_CLIMBSTAIRS_H
