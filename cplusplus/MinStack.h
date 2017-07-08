//
// Created by xujifa on 17-7-8.
// 151

#ifndef CPLUSPLUS_MINSTACK_H
#define CPLUSPLUS_MINSTACK_H

#include <stack>
#include <cmath>
using namespace std;
class MinStack {
    stack<int> real;
    stack<int> mins;
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {

        real.push(x);
        if (mins.empty()) {
            mins.push(x);
        } else {
            mins.push(min(x, mins.top()));
        }
    }

    void pop() {
        real.pop();
        mins.pop();
    }

    int top() {
        return real.top();
    }

    int getMin() {
        return mins.top();
    }
};
#endif //CPLUSPLUS_MINSTACK_H
