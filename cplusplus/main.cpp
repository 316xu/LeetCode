
#include <iostream>
#include "LongestCommonPrefix.h"

using namespace std;
int main() {


    LongestCommonPrefix prefix;
    vector<string> vector(2);
    vector[0] = "abc";
    vector[1] = "abe";
    cout << prefix.longestCommonPrefix(vector);
    return 0;
}