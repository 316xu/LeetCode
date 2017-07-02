//
// Created by xujifa on 17-7-2.
//
#include <vector>
#include <tgmath.h>

#ifndef CPLUSPLUS_PALINDROMENUMBER_H
#define CPLUSPLUS_PALINDROMENUMBER_H

class PalindromeNumber{
public:
    bool isPalindrome(int x) {

        int sign = x > 0 ? 1 : -1;
        x = x * sign;
        std::stringstream ss;
        ss << x;
        std::string str;
        ss >> str;
        long length = str.length();
        std::vector<int> v(length);

        int pos = 0;
        do {
            v[pos++] = x % 10;
            x /= 10;
        } while (x != 0);

        for (int i = 0; i <= length / 2; i++) {
            if (v[i] != v[length -i - 1]) {
                return false;
            }
        }
        return true;
    }
};

#endif //CPLUSPLUS_PALINDROMENUMBER_H
