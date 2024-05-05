#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int *twoSum(int *nums, int target, int numsSize)
{
   int sum = 0;
   int *arr = (int *)malloc(2 * sizeof(int));
   for (int i = 0; i < numsSize; i++)
   {
      sum = nums[i];
      for (int j = i + 1; j < numsSize; j++)
      {
         if (sum + nums[j] == target)
         {
            arr[0] = i;
            arr[1] = j;
            return arr;
         }
      }
   }

   return arr;
}

int main()
{
   int *arr = NULL;
   int n = 3;
   int target = 9;
   int *nums = (int *)malloc(n * sizeof(int));
   nums[0] = 2;
   nums[1] = 7;
   nums[2] = 11;
   nums[3] = 15;
   int *result = twoSum(nums, target, n);
   cout << result[0] << " " << result[1];
}