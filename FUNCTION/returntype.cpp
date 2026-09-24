#include<iostream>
using namespace std;

int returnarea(){
    int a=5;
    int b=6;
    
    return a*b;
}

int main(){
    cout << "Area of rectangle :" << returnarea();
}