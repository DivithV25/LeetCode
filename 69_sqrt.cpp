#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sqrt1( int x, int low, int high)
{

    int mid = low + (high-low) / 2;
    if (low <= high)
    {
        if (mid == (x/mid))
            return mid;
        else if ( mid  > (x/mid))
            return sqrt1(x, low, mid - 1);
        else
            return sqrt1(x, mid + 1, high);
    }
    return mid-1;
}

int main()
{
   int x=2147483647;
  int low=1;
   int high=x;
   int result=sqrt1(x,low,high);
 cout<<result;

}
    