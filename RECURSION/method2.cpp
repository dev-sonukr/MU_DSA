#include <iostream>
using namespace std;

void sum(int n, int current_sum){
    if(n == 0){
        cout << current_sum;
        return;
    }
    sum(n-1, current_sum + n);
}

int main(){
    sum(10,0);
    return 0;
}