#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cout << "Enter Year in YYYY : ";
    cin >> year;

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        cout << "this is leap year";
    }else{
        cout <<" not a leap year";
    }

    return 0;
}