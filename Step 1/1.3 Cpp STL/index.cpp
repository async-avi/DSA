#include <bits/stdc++.h>
using namespace std;

void printPairs(){
    //normal pair
    pair<int, int> p = {1,2};
    cout << p.first << endl;
    //nested pairs
    pair<int, pair<int, int> > q = {1, p};
    cout << q.second.second << endl;
    //pair with array
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[1].second;
}


void printVectors(){
    //single vector
    vector <int> v;
    v.push_back(1);

    //pair vector
    vector<pair<int, int> > vec;
    vec.emplace_back(1,2);
    vector<int>::iterator it = v.begin();
    // cout << *it << endl;


    //looping through vector data (pair)
    // for(auto i: vec){
    //     cout << i.first << endl;
    // }

    vector<int> random;
    random.emplace_back(209);

    //inserting
    random.insert(random.begin(), 2,30);
    // {30,30,209}

    // random.erase(random.begin());
    //{30,209}
    // random.erase(random.end() -1);
    //{30,30}

    random.insert(random.begin(), 6, 100);

    //erasing multiple
    // random.erase(random.begin() + 2, random.end() -2);

    //inserting vector in vector
    // vector<int> copy(2, 50);
    // random.insert(random.begin() + 1, copy.begin(), copy.end());



    cout << "{";
    for(auto p: random){
        if(p == *(random.end()-1)){
            cout << p;
        }else{
            cout << p << ",";
        }
        
    }
    cout << "}" << endl;


}



int main(){
   
    // printPairs();
    printVectors();
    return 0;
}
