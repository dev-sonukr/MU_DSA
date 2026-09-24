#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[6] = {24,435,23,43,323,1};
   int min = arr[0];

   for(int i =0; i<6; i++){
        if(arr[i] < min){
            min = arr[i];
        }
   }

    cout << "min: " << min << endl;

    return 0;
}