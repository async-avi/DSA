#include <bits/stdc++.h>
using namespace std;


 int reverse(int x) {
    int p = 0;

    while(x > 0){
        int last = x%10;
        x = x/10;
        p = (p*10) + last;
    }

    return p;
}

int main(){

    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
}