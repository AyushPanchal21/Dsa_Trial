#include <iostream>
using namespace std;

void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int smallest = i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[smallest],arr[i]);
    }
    for (int i = 0; i < size; i++)
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
  selectionsort(arr,size);
return 0;
}
