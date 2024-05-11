#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circlesandwich = 0;
        int squaresandwich = 0;
        for (int i : students) {
            if (i)
                squaresandwich++;
            else
                circlesandwich++;
        }
        for (int j : sandwiches) {
            if (j == 0 && circlesandwich == 0)
                return squaresandwich;
            if (j == 1 && squaresandwich == 0)
                return circlesandwich;
            if (j)
                squaresandwich--;
            if (j == 0)
                circlesandwich--;
        }
        return 0;
    }
};
