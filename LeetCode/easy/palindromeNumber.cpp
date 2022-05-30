#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x>=0 && x <10) return true;
        if (x < 0) return false;
        string ss = to_string(x);
        for (int i = 0; i < ss.length()/2; i++) {
            if (ss[i] != ss[ss.length() - i - 1] ) {
                return false;
            }
        }
        return true;
    }
};