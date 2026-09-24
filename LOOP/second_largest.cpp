#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {24,435,23,43,323,1};

    int large = arr[0];
    int second_large = INT_MIN;

    for (int i = 1; i < 6; i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large) {
            second_large = arr[i];
        }
    }

    cout << "Second largest: " << second_large << endl;

    return 0;
}