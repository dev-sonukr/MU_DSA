#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter number : ";
    cin >> n;

    if( n%3 == 0 && n%5 == 0 ){
        cout << "prefact";
    }else{
        cout << "not prefact";
    }
}