#include<bits/stdc++.h>
using namespace std;

bool checkarray(int arr1[], int arr2[], int n, int m){
    if(n != m){
        return false;
    }
    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    if(checkarray(arr1, arr2, n, m)){
        cout << "Arrays are equal" << endl;
    } else{
        cout << "Arrays are not equal" << endl;
    }

    return 0;
}