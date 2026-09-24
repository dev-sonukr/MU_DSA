#include<iostream>
using namespace std;


//sum of numbers

int SumOfNumbers(int n){
    int sum = 0;
    while(n>0){
        int digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}

int main(){
    cout<<SumOfNumbers(512);
}