// Binary Search

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int searchInsertPosition(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        int res = -1;
        while (left < right) {
            int mid = left + (right - left)/2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                res = mid;
                right = mid -1;
            }
            else {
                left = mid + 1;
                res = mid + 1;
            }
        }
        return res;
    }
};