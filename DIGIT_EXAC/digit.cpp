#include<iostream>
using namespace std;



int DigitExtrction(int n){

    int count = 0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
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
    int n=-12321;
    cout<<boolalpha<<isPalindrome(n);
}