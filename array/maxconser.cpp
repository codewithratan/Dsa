#include <iostream> 
#include <vector>
using namespace std;

int maxConsecBits(vector<int> &arr) {
    int maxCount = 0, count = 1;
    
    // Loop through the array starting from the second element
    for(int i = 1; i < arr.size(); i++) {
        
        // If the current element is the same as the previous one
        // increment the count
        if(arr[i] == arr[i - 1]) {
            count++;
        } 
        else {
            
            // If not equal, update maxCount if needed and reset count
            maxCount = max(maxCount, count);
            
            // Reset for a new sequence
            count = 1;
        }
    }
    
    return max(maxCount, count);
}

int main() {
    
    vector<int> arr = {0, 1, 0, 1, 1, 1, 1};
    
    cout << maxConsecBits(arr) << endl;
    
    return 0;
}