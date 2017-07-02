//
// Created by xujifa on 17-7-2.
//14
//

#include <string>
#include <vector>
#include <iostream>

#ifndef CPLUSPLUS_LONGESTCOMMONPREFIX_H
#define CPLUSPLUS_LONGESTCOMMONPREFIX_H
using namespace std;

class LongestCommonPrefix {
public:
    string longestCommonPrefix(std::vector<std::string> &strs) {

        string result;

        unsigned long maxLength = (unsigned long) -1;
        for (int i = 0; i < strs.size(); i++) {
            maxLength = maxLength < strs[i].length() ? maxLength : strs[i].length();
        }

        int max = (int) maxLength;

        bool missMatch = false;
        for (int i = 0; i < max; i++) {
            char first = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (first != strs[j][i]) {
                    missMatch = true;
                    break;
                }
            }

            if (missMatch) {
                break;
            }
            result+=first;
        }

        return result;
    }
};

#endif //CPLUSPLUS_LONGESTCOMMONPREFIX_H
