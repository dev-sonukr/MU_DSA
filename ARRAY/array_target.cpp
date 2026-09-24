#include<iostream>
using namespace std;

int main(){
    int arr[7] = {-1,22,-3,0,45,0,5};
    int target = -1;

    for(int i=0; i<7; i++){
        if(arr[i] == target){
            cout << i;
        }
    }

    return 0;
}

