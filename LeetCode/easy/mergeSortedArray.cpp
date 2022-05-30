#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int tp1 = m - 1;
    int tp2 = n - 1;
    int realPos = m + n - 1;
    while (tp1 >= 0 && tp2 >= 0) {
        if (nums1[tp1] <= nums2[tp2]) {
            nums1[realPos] = nums2[tp2];
            tp2 = tp2 - 1;
            realPos = realPos - 1;
        }
        else {
            nums1[realPos] = nums1[tp1];
            tp1 = tp1 - 1;
            realPos = realPos - 1;
        }
        while (tp2 >= 0) {
            nums1[realPos] = nums2[tp2];
            tp2 = tp2 - 1;
            realPos = realPos - 1;
        }
    }
}
