#include <bits/stdc++.h>
using namespace std;

void pyramid(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j ++){
            cout << "* ";
        }
        cout << endl;
    }
}

void flippedPyramid(int n){
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        for(int j = 0; j <= i; j ++){
            cout << "*";
        }

        cout << endl;
    }
}

void invertedPyramid(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void flippedInvertedPyramid(int n){
    for (int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }
        cout << endl;
    }
}


int main (){
    int n;
    cin >> n;
    flippedInvertedPyramid(n);
}