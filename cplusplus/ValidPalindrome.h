//
// Created by xujifa on 17-7-8.
// 125

#ifndef CPLUSPLUS_VALIDPALINDROME_H
#define CPLUSPLUS_VALIDPALINDROME_H

#include <string>
#include <cmath>

#define IS_ALPHANUMERIC(c) ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
#define IS_NUMBER(c) (c >= '0' && c <= '9')
using namespace std;

class ValidPalindrome {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {
            if ((IS_ALPHANUMERIC(s[i]) && IS_ALPHANUMERIC(s[j]) && abs(s[i] - s[j]) == 32) || s[i] == s[j]) {
                i++;
                j--;
                continue;
            } else if ((IS_ALPHANUMERIC(s[i]) || IS_NUMBER(s[i])) && (IS_ALPHANUMERIC(s[j]) || IS_NUMBER(s[j]))) {
                return false;
            }

            if (!(IS_ALPHANUMERIC(s[i]) || IS_NUMBER(s[i]))) {
                i++;
            }
            if (!(IS_ALPHANUMERIC(s[j]) || IS_NUMBER(s[j]))) {
                j--;
            }
        }
        return true;
    }
};

#endif //CPLUSPLUS_VALIDPALINDROME_H
