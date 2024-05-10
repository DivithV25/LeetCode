#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> arr;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {

                if (nums1[i] == nums2[j]) {

                    arr.emplace(nums1[i]);
                }
            }
        }
        vector<int> arr1(arr.begin(), arr.end());
        return arr1;
    }
};
