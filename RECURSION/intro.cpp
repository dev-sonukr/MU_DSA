#include<bits/stdc++.h>
using namespace std;

void printno(int n){

    if(n == 10){
        return;
    }
    cout<<n<<endl;
    printno(n+1);

}

int main(){
    printno(5);
    return 0;
}