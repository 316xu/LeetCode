//
// Created by xujifa on 17-7-9.
// 168

#ifndef CPLUSPLUS_EXCELCOLUMN_H
#define CPLUSPLUS_EXCELCOLUMN_H

#include <string>
using namespace std;
class ExcelColumn {
public:
    string convertToTitle(int n) {
        int a = n;
        string result;

        while(a != 0) {
            int v = a % 26;
            v = v == 0 ? 26 : v;
            result =  (char) ('A' + v - 1) + result;
            a = (a - v) / 26;
        }
        return result;
    }
};

#endif //CPLUSPLUS_EXCELCOLUMN_H
