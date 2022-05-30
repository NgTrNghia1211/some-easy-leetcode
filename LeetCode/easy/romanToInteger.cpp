#include <iostream>
#include <map>

using namespace std;

class Solution {
public:

    int romanToInt(string s) {
        int sum = 0;
        map<char, int> romanMap;
        romanMap.insert({ 'I', 1 });
        romanMap.insert({ 'V', 5 });
        romanMap.insert({ 'X', 10 });
        romanMap.insert({ 'L', 50 });
        romanMap.insert({ 'C', 100 });
        romanMap.insert({ 'D', 500 });
        romanMap.insert({ 'M', 1000 });
        for (int i = 0; i < s.length() ; i++) {
            if (s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) {
                sum = sum - romanMap[s[i]] + romanMap[s[i+1]];
                i++;
            }
            else if (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) {
                sum = sum - romanMap[s[i]] + romanMap[s[i+1]];
                i++;
            }
            else if (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')) {
                sum = sum - romanMap[s[i]] + romanMap[s[i+1]];
                i++;
            }
            else {
                sum += romanMap[s[i]];
            }
        } 
        return sum;
    }
};