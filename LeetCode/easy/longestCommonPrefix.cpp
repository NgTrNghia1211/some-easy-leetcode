#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s = strs.size();
        string res = "";
        bool check = true;
        for (int i = 0; i < strs[0].length(); i++) {
            check = true;
            for (int j = 0; j < s; j++) {
                if (strs[0][i] != strs[j][i]) {
                    check = false;
                    break;
                }
            }
            if (check == true) {
                res += strs[0][i];
            } else {
                break;
            }
        }
        return res;
    }
};