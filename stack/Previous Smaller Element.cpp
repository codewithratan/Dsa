#include <iostream>
#include <vector>
using namespace std;

vector<int> prevSmaller(vector<int>& arr){
    int n = arr.size();
    vector<int> result(n, -1);

    // for each element, check all elements 
    // on the left
    for (int i = 0; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] < arr[i]) {
                result[i] = arr[j];
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 5, 0, 3, 4, 5};
    vector<int> ans = prevSmaller(arr);

    for (int x : ans) cout << x << " ";
    return 0;
}