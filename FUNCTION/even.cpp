#include<bits/stdc++.h>
using namespace std;

void evenorodd(int num){
    if(num%2 == 0){
        cout << "even";
    }else{
        cout << "odd";
    }
}

int main(){
    int num = 3;
    evenorodd(num);

    return 0;
}