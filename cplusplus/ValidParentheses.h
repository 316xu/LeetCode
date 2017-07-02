//
// Created by xujifa on 17-7-2.
//

#ifndef CPLUSPLUS_VALIDPARENTHESES_H
#define CPLUSPLUS_VALIDPARENTHESES_H

#include <string>
#include <stack>
#include <iostream>

#define IS_LEFT(c) (c == '(' || c == '[' || c == '{')
#define IS_MATCH(a, b) ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'))

using namespace std;

class ValidParentheses {
public:
    bool isValid(string s) {
        stack<char> stack;

        if (!IS_LEFT(s[0])) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            if (IS_LEFT(s[i])) {
                stack.push(s[i]);
                continue;
            }
            if (stack.size() == 0) {
                return false;
            }
            char left = stack.top();
            stack.pop();
            if (!IS_MATCH(left, s[i])) {
                return false;
            }
        }

        return stack.size() == 0;
    }
};

#endif //CPLUSPLUS_VALIDPARENTHESES_H
