//
// Created by xujifa on 17-7-1.
// 7
//


#define INT_MAX 2147483647 / 10

class ReserveInteger {

public:
    int reverse(int x) {
        int sign = x > 0 ? 1 : -1;
        x = sign * x;
        if (sign < 0 && x < 0) {
            return 0;
        }
        int reverse = 0;
        bool ready = false;

        do {
            if (ready) {
                return 0;
            }
            int digits = x % 10;
            reverse = reverse * 10 + digits;
            if (reverse > INT_MAX) {

                ready = true;
            }
        } while ((x = x / 10) != 0);

        return sign * reverse;
    }
};
