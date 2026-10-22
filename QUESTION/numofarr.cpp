#include<bits/stdc++.h>
using namespace std;

void numofarr(vector<int> arr){
    int count = 0;

    int maxval = *max_element(arr.begin(), arr.end());

    for(int i =0; i<arr.size(); i++){
        if(maxval == arr[i]){
            count++;
        }   
    }

    cout << count << endl;
}

int main(){
    vector<int> arr = {4,4,0,1};
    numofarr(arr);

    return 0;
}
