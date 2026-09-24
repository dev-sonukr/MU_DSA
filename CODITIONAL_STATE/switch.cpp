#include<iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter intger input : ";
    cin >> day;
    switch (day){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "thursday";
            break;
        case 5:
            cout << "friday";
            break;
        case 6:
            cout << "satuarday";
            break;
        case 7:
            cout << "sunday";
            break;
        default:
            cout << "Invalid Input";
            break;
    }

    
}