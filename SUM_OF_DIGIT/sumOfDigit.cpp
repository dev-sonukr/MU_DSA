#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int digitsum = 0;
    while(num > 0){
        int lastdigit =num%10;
        num = num/10;
        digitsum = digitsum+lastdigit;
    }
    return digitsum;
}

int numofdgt(int num){
    int count = 0;
    while(num > 0){
        num = num/10;
        count++;
    }
    return count;
}

int main(){
    int num = 12321;
    // cout << "Enteer Digits :";
    // cin >> num;
    cout << numofdgt(num);
    // cout << "Sum Of Digits :"<< sumOfDigits(num) << endl;
    return 0;
}