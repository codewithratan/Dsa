// C++ program to find a pair with the given difference
#include <bits/stdc++.h>
using namespace std;

bool findPair(vector<int> &arr, int x) {
    int n = arr.size();
    
    // Compare each element with every other element
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            
            // Check if absolute difference matches target
            if (abs(arr[i] - arr[j]) == x) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    vector<int> arr = {5, 20, 3, 2, 50, 80};
    int x = 78;
    if (findPair(arr, x)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}