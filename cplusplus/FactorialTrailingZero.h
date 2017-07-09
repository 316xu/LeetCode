//
// Created by xujifa on 17-7-9.
// TODO 值得思考

#ifndef CPLUSPLUS_FACTORIALTRAILINGZERO_H
#define CPLUSPLUS_FACTORIALTRAILINGZERO_H

class FactorialTrailingZero {
public:
    int trailingZeros(int n) {

        int result = 0;
        for (long long i = 5; n / i > 0; i *= 5) {
            result += (n / i);
        }
        return result;
    }
};

#endif //CPLUSPLUS_FACTORIALTRAILINGZERO_H
