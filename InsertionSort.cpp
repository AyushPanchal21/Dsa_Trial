#include <iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int cur = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev] > cur){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = cur;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
  int arr[] = {4,1,5,2,3};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
  insertionsort(arr,size);
return 0;
}
