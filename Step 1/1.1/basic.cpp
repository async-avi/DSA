#include <bits/stdc++.h>
using namespace std;


void getGrades(){
    int marks;
    string message = "Your grade is: ";
    cin >> marks;
    if(marks < 25){
        cout << message << "F";
    } else if (marks < 45){
        cout << message << "E";
    } else if (marks < 50){
        cout << message << "D";
    } else if (marks < 60){
        cout << message << "C";
    } else if (marks < 80){
        cout << message << "B";
    } else if (marks < 100) {
        cout << message << "A";
    } else {
        cout << "Invalid number of marks";
    }
}


int main (){
    getGrades();
    return 0;
}