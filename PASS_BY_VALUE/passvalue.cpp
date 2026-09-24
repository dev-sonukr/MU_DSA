#include<iostream>
using namespace std;

int changex(int x){
    x= 2*x;
    cout << "x = " << x <<endl;
}

int changed(int x){
    x= 100;
    return x;
}

int a = 10;
changed(a);
cout << a;


int main(){
    int x=5;
    changex(x);

    cout <<"x = "<< x << endl;
    cout << 234/10;
}