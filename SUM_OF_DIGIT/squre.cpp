#include<bits/stdc++.h>
using namespace std;

void add(int n){
    cout << n+n <<endl;
}

void subtract(int n){
    cout << n-n<< endl;
}

void multi(int n){
    cout << n*n <<endl;
}

void divide(int n){
    cout << n/n <<endl;
}

void remainder(int n){
    cout << n%n <<endl;
}

int main(){
    add(5);
    subtract(6);
    multi(5);
    divide(3);
    remainder(4);
    return 0;
}