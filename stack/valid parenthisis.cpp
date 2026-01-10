#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

bool isBalanced(string& s) {
   
    stack<char> st; 
   
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        
        else if (c == ')' || c == '}' || c == ']') {
            
            // No opening bracket
            if (st.empty()) return false; 
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
            
            // Pop matching opening bracket
            st.pop(); 
        }
    }
    
    // Balanced if stack is empty
    return st.empty(); 
}

int main() {
    string s="[()()]{}";
    cout<<(isBalanced(s)?"true":"false");
    return 0;
}