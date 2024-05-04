#include<iostream>
using namespace std;
int binary(int arr[], int low, int high, int key)
{
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
        {
            if (arr[mid] <= arr[high] && key > arr[high])
            {
                return binary(arr, low, mid - 1, key);
            }
            else
            {
                return binary(arr, mid + 1, high, key);
            }
        }

        else
        {
            if (arr[low] <= arr[mid] && key < arr[low])
            {
                return binary(arr, mid + 1, high, key);
            }
            else
            {
                return binary(arr, low, mid - 1, key);
            }
        }
    }
    return -1;
}

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=7;
   int key=0;
   int low=0;
   int high=n-1;
 int result = binary(arr,low,high,key);
 cout<<result;
}