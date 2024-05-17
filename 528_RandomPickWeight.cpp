#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> w1;
    int sum;

public:
    Solution(vector<int>& w) {
        sum = 0;
        for (int i : w) {
            sum = sum + i;
            w1.push_back(sum);
        }
    }

    int pickIndex() {
        int val = (rand() % sum)+1;

        int low = 0;
        int high = w1.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (w1[mid] < val)
                low = mid + 1;
            else
                high = mid;
        }
           
        return low;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */