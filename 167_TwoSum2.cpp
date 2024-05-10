#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int high = numbers.size() - 1;
        while (low <= high) {
            if (numbers[low] + numbers[high] == target)
                return {low + 1, high + 1};
            if (numbers[low] + numbers[high] > target)
                high--;
            else
                low++;
        }
        return {low + 1, high + 1};
    }
};