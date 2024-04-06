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


//Triangle

void triangle(int n){
    for(int i = 0; i < n; i ++){

        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        for(int j = 0 ; j < 2*i + 1; j++){
            cout << "*";
        }

         for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
}


void invertedTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j ++){
        cout << " ";
       }
        for(int j = 0; j < 2*n - (2*i + 1); j++){
            cout << "*";
        }

       cout << endl;
    }
}

void halfDiamond(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void flippedHalfDiamond(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j ++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j <= i; j ++){
            cout << " ";
        }
        for(int j = 0; j < n - i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}


void diamond(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*n - (2*i + 1); j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void hourglass(int n){
    for(int i = 0; i < n; i ++){
      for(int j = 0; j < i; j++){
        cout << " ";
      }
      for(int j = 0; j < 2*n - (2*i + 1); j++){
        cout << "*";
      }
      cout << endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        for(int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void numberPyramid(int n){
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void continousNumberPyramid(int n){
    for(int i = 0; i < n; i++){
        cout << i << endl;
    }
}


int main (){
    int n;
    cin >> n;
    numberPyramid(n);
    return 0;
}