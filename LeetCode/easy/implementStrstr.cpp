#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0;
        int s_n = needle.length();
        int s_h = haystack.length();
        for (int i = 0; i < s_h; i++) {
            for (int j = 0; j < s_n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
                if (j + 1 == s_n) return i;
            }
        }
        return -1;
    }
};