#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++) {
        int temp;
        if(i / 2 == 0){
            temp = 1;
        }else{
            temp =i+1;
        }
        for (int j = 0; j < temp; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
}

int main(){
    int n = 6;
    print(n);
}