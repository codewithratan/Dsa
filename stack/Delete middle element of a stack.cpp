#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void deleteMid(stack<int>& st, int size) {
    // Use a vector to store stack elements
    vector<int> v;
    while(!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }

    // Find the middle index
    int mid = size / 2;

    // Remove the middle element
    v.erase(v.begin() + mid);

    // Push elements back to the stack
    for(int i = v.size() - 1; i >= 0; i--) {
        st.push(v[i]);
    }
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int size = st.size();

    deleteMid(st, size);

    while (!st.empty()) {
        int p = st.top();
        st.pop();
        cout << p << " ";
    }
    
    return 0;
}