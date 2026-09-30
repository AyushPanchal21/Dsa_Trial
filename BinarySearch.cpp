#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr, int tar)
{
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    while (start <= end)
    {
        // int min = (start + end)/2; //give and overflow error  
        int mid = start + (end - start) / 2;
        if(tar>arr[mid]){
            start = mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int tar = 5;
    cout << binarysearch(arr, tar);
    return 0;
}
