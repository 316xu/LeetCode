//
// Created by xujifa on 17-7-11.
// 191

#ifndef CPLUSPLUS_NUMBEROFONE_H
#define CPLUSPLUS_NUMBEROFONE_H

#include <cstdint>

class NumberOfOne {
public:
    int hammingWeight(uint32_t n) {

        int i = 0;
        int result = 0;
        while (i < 32) {
            if (n % 2 == 1) {
                result++;
            }
            i++;
            n >>= 1;
        }

        return result;
    }
};
#endif //CPLUSPLUS_NUMBEROFONE_H
