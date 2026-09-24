#include<bits/stdc++.h>
using namespace std;

void number(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << "*" <<" ";
        }
        cout << endl;
    }
}

void charecter(int n){
    for(int i=1; i<=n; i++){
        char ch='A';
        for(int i=1; i<=n; i++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

void charecter1(int n){
     char ch='A';
    for(int i=1; i<=n; i++){
        for(int i=1; i<=n; i++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

void counting(int n){
    int num =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << num <<" ";
            num++;
        }
        cout << endl;
    }
}

void triangle(int n ){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){ // i+l also you do
            cout << "*";
        }
        cout << endl;
    }
}

void trionum(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}

void chartrio(int n){
    for(int i=1;i<=n ; i++){
        int ch=1;
        for(int j=1; j<=i; j++){
        cout << ch;
        ch++;
        }
        cout << endl;
    }
}

void numer(int n){
    for(int i=0;i<=n;i++){
        for(int j=i+1; j>0; j--){
            cout << j << "";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "enter value :";
    cin>> n;
    numer(n);
}