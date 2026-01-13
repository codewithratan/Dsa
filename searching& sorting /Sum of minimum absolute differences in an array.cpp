// C++ program to find Sum of minimum absolute
//  difference of each array element
#include <bits/stdc++.h>
using namespace std;

int minSumDiff(vector<int> &arr) {
    int n = arr.size();
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        int minDiff = INT_MAX;
        
        for (int j = 0; j < n; j++) {
            if (i != j) {
                minDiff = min(minDiff, abs(arr[i] - arr[j]));
            }
        }
        
        // Add minimum difference to sum
        sum += minDiff;
    }
    
    return sum;
}

int main() {
    vector<int> arr = {4, 1, 5};
    cout << minSumDiff(arr);
    return 0;
}