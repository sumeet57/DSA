#include <iostream>
#include <vector>

using namespace std;

int peakIndex(vector<int>& arr){
    int n = arr.size();
    int a = 0;
    int b = n-1;
    
    while(a <= b){
        int mid = a + (b-a)/2;
        
        if(mid > 0 && mid < n-1 && arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid > 0 && arr[mid] > arr[mid-1]){
            a = mid+1;
        }else{
            b = mid-1;
        }
    }
    
    return -1;
}

int main() {

    vector<int> arr = {0,1,0};

    cout << peakIndex(arr) << endl;

    return 0;
}