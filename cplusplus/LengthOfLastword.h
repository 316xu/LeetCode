//
// Created by xujifa on 17-7-4.
//

#ifndef CPLUSPLUS_LENGTHOFLASTWORD_H
#define CPLUSPLUS_LENGTHOFLASTWORD_H

#include <string>
using namespace std;

class LengthOfLastWord {
public:

    int lengthOfLastWord(string s) {
        int res = 0;
        int i = s.length() - 1;
        while (s[i] == ' ' && i >= 0) {

            i--;
        }

        while (s[i] != ' ' && i >= 0) {
            i--;
            res++;
        }
        return res;
    }
};
#endif //CPLUSPLUS_LENGTHOFLASTWORD_H
