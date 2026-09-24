#include<iostream>
using namespace std;

int minoftwo(int a, int b){
    if(a > b){
        return b;
    }else{
        return a;
    }
}

int main(){
    cout << minoftwo(1,5);
    return 0;
}