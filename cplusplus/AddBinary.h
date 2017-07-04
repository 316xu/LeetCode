//
// Created by xujifa on 17-7-4.
//

#ifndef CPLUSPLUS_ADDBINARY_H
#define CPLUSPLUS_ADDBINARY_H

#include <string>

using namespace std;

class AddBinary {
public:
    string addBinary(string a, string b) {

        long l1 = a.length() - 1, l2 = b.length() - 1;

        string res;
        int c = 0;
        while (l1 >= 0 || l2 >= 0) {

            c += l1 >= 0 ? a[l1--] - '0' : 0;
            c += l2 >= 0 ? b[l2--] - '0' : 0;
            res = char(c % 2 + '0') + res;
            c /= 2;
        }
        if (c == 1) {
            res = '1' + res;
        }
        return res;
    }
};

#endif //CPLUSPLUS_ADDBINARY_H
