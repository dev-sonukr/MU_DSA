#include<iostream>
using namespace std;

int main(){
    char C;
    cout << "Enter Charectr :";
    cin >> C; 
    if(C == 'A' || C =='a'){
        cout << "vowel";
    }else{
        cout << "Consonant";
    }
}