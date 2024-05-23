#include <bits/stdc++.h>
using namespace std;


//max, min
vector<int> maxMin(int arr[], int n){
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i = 1; i < n; i++){
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    return {maxi, mini};
}


//linear search
int linearSearch(int arr[], int n, int k){ 
    for(int i = 0; i < n; i++){
        if(arr[i] == k){ 
            return i;
            break;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int k){
    int start = 0;
    int end = n -1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == k){
            return mid;
        } else if(arr[mid] < k){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << binarySearch(arr, n, 20) << endl;
    return 0;
}