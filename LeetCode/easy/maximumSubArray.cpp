// Kadane's Algorithm

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSub = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxSub = max(maxSub, sum);
            if (sum < 0) sum = 0;
        }
        return maxSub;
    }
};
