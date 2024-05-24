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


//insertion sort 

void iSort(int arr[], int n){
 for(int i = 1; i < n; i++){
	int current = arr[i];
	int j = i - 1;

	while(arr[j] > current && j >= 0){
		arr[j + 1] = arr[j];
        j--;
	}

	arr[j+1] = current;
 }
}


//questions

void printMaxTill(int arr[], int n){
	int mx = INT_MIN;
	for(int i = 0; i < n; i++){
		mx = max(mx, arr[i]);
		cout << mx << " ";
	}
}

void sumOfSub(int arr[], int n){
	int curr = 0;
	for(int i = 0; i < n; i++){
		curr = 0;
		for(int j = i; j < n; j++){
			curr += arr[j];
			cout << curr << " ";
		}

	}
}

void recordBreak(int arr[], int n){

	int ans = 0;
	int mx = -1;

	for(int i = 0; i < n; i++){
		if(arr[i] > mx && arr[i] > arr[i+1]){
			ans++;
		}
		mx = max(mx, arr[i]);
	}

	cout << ans << endl;
}

void repeating(int arr[], int n){
	int index = INT_MAX;

	if(n > 1){
		for(int i = 0; i < n - 1; i++){
		int curr = arr[i];
		for(int j = i + 1; j < n; j++){
			if(arr[j] == curr && i < index){
				index = i;
				break;
			}
		}
	}
	if(n == 1 || index == INT_MAX) cout << 0;
	else cout << index;
	
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];

	for(int i = 0; i < n; i++) cin >> arr[i];

	repeating(arr, n);
	// for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}