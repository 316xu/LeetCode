//
// Created by xujifa on 17-7-7.
// 119

#ifndef CPLUSPLUS_PASCALTRIANGLE2_H
#define CPLUSPLUS_PASCALTRIANGLE2_H

#include <vector>
using namespace std;
class PascalTriangle2 {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex + 1);

        result[0] = 1;
        if (rowIndex == 0) {
            return result;
        }
        result[1] = 1;

        if (rowIndex == 1) {
            return result;
        }

        for (int i = 2; i <= rowIndex; i++) {
            result[i] = 1;
            for (int j = i - 1; j > 0; j--) {
                result[j] = result[j - 1] + result[j];
            }
        }
        return result;
    }
};
#endif //CPLUSPLUS_PASCALTRIANGLE2_H
