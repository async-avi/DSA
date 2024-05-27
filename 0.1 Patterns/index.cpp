#include <bits/stdc++.h>
using namespace std;

void squarePatternStar(int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }

}


void sqaurePatternNum(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}


void incrementNumSquare(int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void incrementNumInRow(int n){
    int p = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            p+=1;
            cout << p << " ";
        }
        cout << endl;
    }
}

void normalStarTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void normalNumPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void incrementRowTriangle(int n){
    int p = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            p+=1;
            cout << p << " ";
        }
        cout << endl;
    }
}

void incrementRowWithNum(int n){
    for(int i = 1; i <= n; i++){
        int val = i;
        for(int j = 1; j<=i; j++){
            cout << val << " ";
            val+=1;
        }
        cout << endl;
    }
    //think without extra variables
}

void reverseNumTriangle(int n){
    for(int i = n - 1; i >= 0; i--){
        for(int j = n - i; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    reverseNumTriangle(n);
    return 0;
}