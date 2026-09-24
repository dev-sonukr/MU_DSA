#include<iostream>
using namespace std;


bool isPalindrome(int n){
    int org = abs(n);
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }

    if(org==rev){
        return true;
    }
    return false;
}


int main(){
    int n = 12321;
    cout<<boolalpha<<isPalindrome(n);
}