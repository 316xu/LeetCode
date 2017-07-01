
#include <iostream>
#include "ReserveInteger.h"
using namespace std;
int main() {


    ReserveInteger *i = new ReserveInteger();
    std::cout << i->reverse(-2147483648);
    return 0;
}