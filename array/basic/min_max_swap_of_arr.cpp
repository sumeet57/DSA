#include <iostream>

using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = 0;
    int max = 0;

    for(int i=0;i<n;i++){
        if(arr[i] < arr[min]){
            min = i;
        }else if(arr[i] > arr[max]){
            max = i;
        }else{
            continue;
        }
    }

    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


    return 0;
}