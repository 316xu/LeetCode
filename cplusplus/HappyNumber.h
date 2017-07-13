//
// Created by xujifa on 17-7-13.
// 202 参考了答案，用道路 floyd cycle detection algorithm

#ifndef CPLUSPLUS_HAPPYNUMBER_H
#define CPLUSPLUS_HAPPYNUMBER_H

class HappyNumber {

public:
    bool isHappy(int n) {

        int slow = n, fast = n;

        do {

            slow = digitSquareSum(slow);
            fast = digitSquareSum(fast);
            fast = digitSquareSum(fast);
        } while (slow != fast);

        if (slow == 1) {
            return true;
        }

        return false;
    }

    int digitSquareSum(int n) {
        int sum = 0, tmp;
        while (n) {
            tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }
};

#endif //CPLUSPLUS_HAPPYNUMBER_H
