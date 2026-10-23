#include<bits/stdc++.h>
using namespace std;

void count_query(string arr[], int n, int q, string query[]){
    for(int i = 0; i < q; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(query[i] == arr[j]){
                count++;
            }
        }
        cout << query[i] << " occurs " << count << " times" << endl;
    }
}

int main(){
    string list = {"ds", "sdf", "ds","dsd", "sddf", "ds"};
    string query[] = {"sddf", "ds"};
    int n = sizeof(list)/sizeof(list[0]);
    int q = sizeof(query)/sizeof(query[0]);

    count_query(list, n, q, query);

    return 0;
}