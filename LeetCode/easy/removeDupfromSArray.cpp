#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //int len = nums.size();
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i = i + 1;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};