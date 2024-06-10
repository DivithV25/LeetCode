#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int parity(int x) {
        if (x % 2 == 0)
            return 1;
        return 0;
    }
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) {

            if ((parity(nums[i])) == (parity(nums[i - 1]))) {

                return false;
            }
        }
        return true;
    }
};