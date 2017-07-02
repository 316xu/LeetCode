
#include <iostream>
#include "PalindromeNumber.h"
using namespace std;
int main() {

    PalindromeNumber *p = new PalindromeNumber();
    cout << p->isPalindrome(-2147447412) << endl;

    return 0;
}