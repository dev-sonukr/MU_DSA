#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {3,2,45,0,5};
    int n =5;
    
    int l = 0;
    int r = n - 1;

    while(l <= r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

