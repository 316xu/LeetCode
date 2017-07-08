//
// Created by xujifa on 17-7-8.
//

#ifndef CPLUSPLUS_STOCKPROFIT2_H
#define CPLUSPLUS_STOCKPROFIT2_H

#include <vector>
#include <climits>

using namespace std;

class StockProfit {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size() == 0 || prices.size() == 1) {
            return 0;
        }
        int res = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            res += max(0, prices[i + 1] - prices[i]);

        }
        return res;
    }
};
#endif //CPLUSPLUS_STOCKPROFIT2_H
