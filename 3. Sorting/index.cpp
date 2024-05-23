#include <bits/stdc++.h>
using namespace std;


//selection sort
void selectionSort(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[i]){
				swap(arr[j], arr[i]);
			}
		}
	}
}

//bubble sort

void bubbleSort(int arr[], int n){
	for(int i = n - 1; i >= 1; i--){
		int didswap = 0;
		for(int j = 0; j <= i - 1; j++){
			if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                didswap = 1;
            }
		}

		if(didswap == 0) break;
	}
	
}


int main(){
	int n;
	cin >> n;
	int arr[n];

	for(int i = 0; i < n; i++) cin >> arr[i];

	bubbleSort(arr, n);
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}