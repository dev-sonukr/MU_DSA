#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];

    for (int i=0; i<5; i++){
        cin >> arr[i];
    }

    
    // for (int i=0; i<6; i++){
    //     cout << arr[i] << endl;
    // }

    cout << "el index no 1: " << arr[1] << endl;

    arr[1] = 3;

    cout << "el index no 1: " << arr[1] << endl;

    return 0;
}