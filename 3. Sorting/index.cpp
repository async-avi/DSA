#include <bits/stdc++.h> 
using namespace std;

int par(vector<int> &arr, int low, int high){
    int p = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= arr[p] && i <= high){
            i++;
        }

        while(arr[j] > arr[p] && j >= low){
            j--;
        }

        if( i < j) swap(arr[i], arr[j]);
    }

    swap(arr[p], arr[j]);
    return j;

}

void qs(vector<int> &arr, int low, int high){
    if(low < high){
        int pa = par(arr, low, high);

        qs(arr, low, pa - 1);
        qs(arr, pa + 1, high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    qs(arr, 0, arr.size() - 1);
    return arr;
}


int main(){
    vector<int> arr = {5,6,7,1,2};
    vector<int> res = quickSort(arr);

    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    return 0;
}