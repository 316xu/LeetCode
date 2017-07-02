//
// Created by xujifa on 17-7-3.
// 28
//

#include <string>
#include <iostream>

#ifndef CPLUSPLUS_IMPLEMENTSTRSTR_H
#define CPLUSPLUS_IMPLEMENTSTRSTR_H
using namespace std;

class ImplementStrStr {
public:
    int strStr(string haystack, string needle) {
        if (haystack == needle) {
            return 0;
        }
        int* lps = computeLps(needle);

        int i = 0;
        int j = 0;
        while (i < haystack.length()) {
            if (needle[j] == haystack[i]) {
                j++;
                i++;
            }
            if (j == needle.length()) {
                return i - j;
            } else if (needle[j] != haystack[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return -1;
    }

private:
    int* computeLps(string needle) {
        int* lps = new int[needle.length()];
        int pos = 0;
        lps[0] = 0;
        for (int i = 1; i < needle.length();) {
            if (needle[i] == needle[pos]) {
                lps[i++] = ++pos;
            } else if (pos){
                pos = lps[pos - 1];
            } else {
                lps[i++] = 0;
            }
        }
        return lps;
    }

};
#endif //CPLUSPLUS_IMPLEMENTSTRSTR_H
