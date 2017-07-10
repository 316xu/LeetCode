//
// Created by xujifa on 17-7-11.
// 190
// TODO 看了 solutions 发现，可以直接用数字来操作，不需要转字符串，下次遇到这种题目时候，先想想能不能直接操作数字解决

#ifndef CPLUSPLUS_REVERSEBITS_H
#define CPLUSPLUS_REVERSEBITS_H

#include <cstdint>
#include <string>
using namespace std;
class ReverseBits {
public:
    uint32_t reverseBits(uint32_t n) {
        string bin;
        int length = 0;

        while (n) {
            bin = (char) ('0' + n % 2) + bin;
            n = (n - n % 2) / 2;
            length++;
        }
        while (length < 32) {
            length++;
            bin = '0' + bin;
        }

        int i = 0;
        int mul = 1;
        uint32_t result = 0;
        while (i < 32) {
            result += mul * (bin[i] - '0');
            mul *= 2;
            i++;
        }
        return result;
    }
};
#endif //CPLUSPLUS_REVERSEBITS_H
