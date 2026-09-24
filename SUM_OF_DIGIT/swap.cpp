#include<bits/stdc++.h>
using namespace std;

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 4;
    int b = 5;

    cout << a <<endl;
    cout << b <<endl;

    swap(a,b);

    cout << a <<endl;
    cout << b <<endl; 

    return 0;
}