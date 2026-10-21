#include<bits/stdc++.h>
using namespace std;

int fibbonaci(int n){
    if(n <= 1){
        return n;
    }
    return fibbonaci(n-1) + fibbonaci(n-2);
}

int main(){
    int n =9;
    for(int i=0; i<n; i++){
        cout << fibbonaci(i) << " ";
    }
    return 0;
}