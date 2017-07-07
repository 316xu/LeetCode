//
// Created by xujifa on 17-7-8.
// 121

#ifndef CPLUSPLUS_STOCKPROFIT_H
#define CPLUSPLUS_STOCKPROFIT_H

#include <vector>
#include <climits>

using namespace std;

class StockProfit {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size() == 0 || prices.size() == 1) {
            return 0;
        }
        int diff[prices.size() - 1];
        for (int i = 0; i < prices.size() - 1; i++) {
            diff[i] = prices[i + 1] - prices[i];
        }

        int maxs[prices.size() - 1];
        maxs[0] = diff[0];
        int res = maxs[0];

        for (int i = 1; i < prices.size() - 1; i++) {
            maxs[i] = maxs[i - 1] < 0 ? diff[i] : (maxs[i - 1] + diff[i]);
            res = max(res, maxs[i]);
        }
        if (res < 0) {
            return 0;
        }
        return res;
    }
};

#endif //CPLUSPLUS_STOCKPROFIT_H
