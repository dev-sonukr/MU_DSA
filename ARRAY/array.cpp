#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];

    int arr2[6] = {1,2,3,4,4,3};
    for (int i=0; i<6; i++){
        cout << arr2[i] << endl;
    }

    while(i<6){
        cout << arr2[i];
        i++;
    }

    cout << "Enter Value :";
    cin >> arr[0] >> arr[1]>>arr[2]>>arr[3]>>arr[4];

    cout << arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4] << arr[6];

    return 0;
}