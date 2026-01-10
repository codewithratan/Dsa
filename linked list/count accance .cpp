// C++ program to count occurrences in
// a linked list by recursion
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
  	Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Counts the no. of occurrences of a key 
// in a linked list
int count(struct Node* head, int key) {
    if (head == NULL)
        return 0;
  	
  	int ans = count(head->next, key);
  
    if (head->data == key)
        ans++;
  
    return ans;
}

int main() {
  
    //Hard Coded Linked List 
  	// 1->2->1->2->1

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);
	
  	int key = 1;

    cout << count(head, key);
    return 0;
}