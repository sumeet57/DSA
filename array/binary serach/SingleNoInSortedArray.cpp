#include <iostream>
#include <vector>

using namespace std;

int singleno(vector<int>& arr){
    int n = arr.size();
    int a = 0;
    int b = n-1;
    if (n == 1) return arr[0];

    while(a <= b){
        int mid = a + (b-a)/2;

        if(mid==0 && arr[mid] != arr[mid+1]) return arr[mid];
        if(mid==n-1 && arr[mid] != arr[mid-1]) return arr[mid];

        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];

        if(mid%2 == 0){
            if(arr[mid] == arr[mid+1]) a = mid+1;
            else b = mid-1;
        }
        else{
            if(arr[mid] == arr[mid-1]) a = mid+1;
            else b = mid-1;
        }
    }

    return 0;
}

int main(){
    vector<int> arr = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8};
    
    cout<<singleno(arr);

    return 0;
}