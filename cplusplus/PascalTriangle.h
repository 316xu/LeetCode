//
// Created by xujifa on 17-7-7.
// 118

#ifndef CPLUSPLUS_PASCALTRIANGLE_H
#define CPLUSPLUS_PASCALTRIANGLE_H

#include <vector>
using namespace std;
class PascalTriangle {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        if (numRows == 0) {
            return result;
        }

        vector<int> first(1);
        first[0]=1;
        result[0] = first;

        for (int i = 1; i < numRows; i++) {

            vector<int> now(i+1);
            vector<int> pre = result[i - 1];
            now[0] = 1;
            now[i] = 1;

            for (int j = 1; j < i; j++) {
                now[j] = pre[j-1] + pre[j];
            }

            result[i] = now;
        }
        return result;

    }
};
#endif //CPLUSPLUS_PASCALTRIANGLE_H
