// C++ program to maximize array sum after K negations
#include <bits/stdc++.h>
using namespace std;

int maximizeSum(vector<int> &arr, int k) {
    int n = arr.size();
    
    // Perform k modifications
    for (int i = 0; i < k; i++) {
        
        // Find the minimum element in the array
        int minIndex = 0;
        for (int j=1; j<n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Negate the minimum element
        arr[minIndex] = -arr[minIndex];
    }
    
    // Calculate and return the sum of the modified array
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    vector<int> arr = {-2, 0, 5, -1, 2};
    int k = 4;
    cout << maximizeSum(arr, k);
    return 0;
}