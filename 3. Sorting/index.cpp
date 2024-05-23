#include <bits/stdc++.h> 
using namespace std;

int print2largest(int arr[], int n) {
	    // code here
	    int lar = arr[0];
	    int scnd = - 1;
	    for(int i = 1; i<n; i++){
	        if(arr[i] > lar){
	            lar = arr[i];
	        }
	    }
	    
	    for(int i = 0; i < n; i++){
	        if(arr[i] > scnd && arr[i] < lar) scnd = arr[i];
	    }
	    
	    return scnd;
	}	



int main(){
    int arr[5] = {5,6,7,1,2};
    int res = print2largest(arr, 5);

    cout << res << endl;
    return 0;
}