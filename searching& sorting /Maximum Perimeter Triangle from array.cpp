#include <bits/stdc++.h>
using namespace std;

int maxPerimeter(vector<int> &arr) {
    int n = arr.size();

    // to store the result
    int ans = -1;

    // nested loops to generall
    // all possible combinations
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {

                // check if the three sides
                // can form a triangle or not
                if(arr[i] + arr[j] > arr[k] &&
                   arr[j] + arr[k] > arr[i] &&
                   arr[k] + arr[i] > arr[j]) {
                    ans = max(ans, arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {6, 1, 6, 5, 8, 4};
    cout << maxPerimeter(arr);
    return 0;
}