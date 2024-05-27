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

int main(){
    int n;
    cin >> n;
    incrementNumInRow(n);
    return 0;
}