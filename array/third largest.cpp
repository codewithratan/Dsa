// C++ program to find the third largest
// element in an array.
#include <bits/stdc++.h>
using namespace std;

int thirdLargest(vector<int> &arr) {
    int n = arr.size();
    
    // Sort the array 
    sort(arr.begin(), arr.end());
    
    // Return the third largest element 
    return arr[n-3];
}

int main() {
    vector<int> arr = {1, 14, 2, 16, 10, 20};
    cout << thirdLargest(arr) << endl;

    return 0;
}