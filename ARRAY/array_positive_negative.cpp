#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {-1,22,-3,0,45,0,5};
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int i=0; i<7; i++){
        if(arr[i] > 0){
            positive++;
        }else if(arr[i] < 0){
            negative++;
        }else{
            zero++;
        };
    }

    cout << "positive :" << positive <<endl;
    cout << "negative :" << negative <<endl;
    cout << "zeros :" << zero <<endl;

    return 0;
}

