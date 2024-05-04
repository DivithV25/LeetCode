#include <iostream>
using namespace std;
int mid;
int binary(int arr[], int low, int high, int key)
{
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binary(arr, low, mid - 1, key);
        else
            return binary(arr, mid + 1, high, key);
    }

    if (mid == 0 && key < arr[mid])
        return mid;
    else
        return mid + 1;
}

int main()
{
    int result;
    int low, high, key;
    int n = 4;
    int arr[n] = {2, 4, 8, 12};
    key = 14;
    result = binary(arr, 0, n - 1, key);
    
   cout<<result<<endl;
}
