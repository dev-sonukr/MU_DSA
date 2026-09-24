#include<iostream>
using namespace std;



int NumofDigit(int n){
    int count = 0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}

void DigitExtraction(int n){
    int digit = 0;
    while(n>0){
        digit = n%10;
        cout << digit <<" ";
        n=n/10;
    }
}

int ReverseDigits(int x){
    int rev=0;
    while(x>0){
        int digit = x%10;
        rev = (rev*10) + digit;
        x = x/10;
    }
    return rev;
}


int main(){
    int n = 142321;
    DigitExtraction(n);
}