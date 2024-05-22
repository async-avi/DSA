#include <bits/stdc++.h>
using namespace std;


//sum of all natural numbers
int sum(int n){
    if(n == 0) return 0;

    return n + sum(n-1);
}

//phythagorean

bool phyth(int x, int y, int z){
    int a, b, c;
    a = max(x, max(y, z));

    if(a == x){
        b = y;
        c = z;
    } else if(a == y){
        b = x;
        c = z;
    } else {
        b = x;
        c = y;
    }

    int sqA = a*a;

    if(sqA == (b*b) + (c*c)) return true;

    return false;
}

//conversions
int binaryToDec(int n){
    int dec = 0;
    int i = 0;
    while(n!= 0){
        int rem = n % 10;
        dec += rem * pow(2, i);
        n /= 10;
        i++;
    }
    return dec;
}

int octToDec(int n){
    int dec = 0;
    int oct = 0;
    while(n!= 0){
        int rem = n % 10;
        dec += rem * pow(8, oct);
        n /= 10;
        oct++;
    }
    return dec;
}

//decimal to binary
int decToBinary(int n){
    int ans = 0;
    int x = 1;

    while(x <= n){
        x *= 2;
    }
    x/=2;

    while(x != 0){
        int last = n/x;
        n -= last*x;
        x/=2;
        ans = ans*10 + last;
    }

    return ans;
}


int decimalToOct(int n){
    int ans = 0;
    int x = 1;

    while(x <= n) x*=8;
    x/=8;

    while(x > 0){
        int last = n/x;
        n -= last*x;
        x/=8;
        ans = ans*10 + last;
    }
}

int main(){
    int n;
    cin >> n;
    cout << decimalToOct(n);
    return 0;
}   