#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int arr[] = {0,2,2,1,2,2,0,1,1};

    n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}

