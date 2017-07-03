//
// Created by xujifa on 17-7-3.
// 38
//
#include <string>
using namespace std;
#ifndef CPLUSPLUS_COUNTANDSAY_H
#define CPLUSPLUS_COUNTANDSAY_H
class CountAndSay {
public:
    string countAndSay(int n) {
        if (n == 0) {
            return "";
        }

        string res = "1";
        for (int i = 2; i <= n; i++) {

            int count = 1;
            string say;
            for (int j = 1; j < res.length(); j++) {
                if (res[j] == res[j-1]) {
                    count++;
                } else {
                    say += count + '0';
                    say += res[j-1];
                    count = 1;
                }
            }
            say += count + '0';
            say += res[res.length() - 1];
            res = say;
        }
        return res;
    }
};

#endif //CPLUSPLUS_COUNTANDSAY_H
