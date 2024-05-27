#include <bits/stdc++.h>
using namespace std;


string checkType(char c){
  
    string res;
  if(c >= 'a' && c <= 'z') res = "lowercase";
  else if(c >= 'A' && c <= 'Z') return res = "uppercase";
  else if(c >= '0' && c <= '9') return res = "numeric";

  return res;
}

int sumToN(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int primeOrNot(int n){
    int p = -1;

    for(int i = 2; i < n; i++){
        if(n%i == 0){
            p = 0;
            break;
        }
    }


    return p;
}


int main(){
    int n;
    cin >> n;

    int prime = primeOrNot(n);
    if(prime == -1){
        cout << "prime";
    } else {
        cout << "not prime";
    }

    return 0;
}