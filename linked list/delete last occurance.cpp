// C++ program to delete last occurrence 
// of key in singly linked list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Function to delete the last occurrence 
// of a key in the linked list
Node* deleteLastOccurrence(Node* head, int key) {
    Node *last = nullptr, *lastPrev = nullptr;
    Node *curr = head, *prev = nullptr;

    // Traverse the list to find the last 
  	// occurrence of the key
    while (curr != nullptr) {
        if (curr->data == key) {
            lastPrev = prev;
            last = curr;
        }
        prev = curr;
        curr = curr->next;
    }

    // If the key was found
    if (last != nullptr) {
        
      	// If last occurrence is not the head
        if (lastPrev != nullptr) {
            lastPrev->next = last->next;
        } else {
          
            // If last occurrence is the head, 
          	// move head to next node
            head = head->next;
        }
        delete last;
    }

    return head;
}

void print(Node* curr) {
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
  
    // Create a hard-coded linked list:
    // 1 -> 2 -> 2 -> 4 -> 2
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(2);

    int key = 2;
    head = deleteLastOccurrence(head, key);
    print(head);
    return 0;
}