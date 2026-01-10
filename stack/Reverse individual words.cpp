#include <bits/stdc++.h>
using namespace std;


string reverseWords(string str) {
    stack<char> st;
    string result = "";

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            st.push(str[i]);
        } else {
            while (!st.empty()) {
                result += st.top();
                st.pop();
            }
            result += " "; // Add space after the word
        }
    }

    // Reverse the last word (since it may not end with a space)
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

// Driver program to test function
int main() {
    string str = "ratan ;
    string reversedString = reverseWords(str);
    cout << reversedString << endl;
    return 0;
}