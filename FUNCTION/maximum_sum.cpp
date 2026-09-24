#include<bits/stdc++.h>
using namespace std;

int maximumSum(int arr[], int n) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n-1; i++) {
        currentSum = currentSum + arr[i];
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }else if(currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = maximumSum(arr, n);
    cout << "Maximum contiguous sum is " << result << endl;
    return 0;
}