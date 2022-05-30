#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int pos = s.length() - 1;
        int len = 0;
        bool check = false;
        while(true){
            if (pos < 0) break;
            if (s[pos] != ' '){
                len++;
                check = true;
            }
            if (pos -1 <0 || check == true && s[pos - 1] == ' ') {
                break;
            }
            pos--;
        }
        return len;
    }
};