#include <bits/stdc++.h>
using namespace std;

void printPairs(){
    pair<int, int> p = {1,2};
    cout << p.first << endl;
    //nested pairs
    pair<int, pair<int, int> > q = {1, p};
    cout << q.second.second << endl;
    //pair with array
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[1].second;
}




int main(){
   
    printPairs();
    //nested pairs
    return 0;
}
