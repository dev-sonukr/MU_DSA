#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[6] = {24,435,23,43,323,1};
   int max = arr[0];

   for(int i =0; i<6; i++){
        if(arr[i] < max){
            max = arr[i];
        }
   }

    cout << "max: " << max << endl;

    return 0;
}