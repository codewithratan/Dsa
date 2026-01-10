// C++ program to pairwise swap elements
// in a given linked list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Recursive function to swap data of nodes in pairs
void pairwiseSwap(Node* head) {
    
    // Base case: if the list is empty or has only
  	// one node, no swap
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    // Swap the data of the current node with the next node
    swap(head->data, head->next->data);

    // Recursion for the next pair
    pairwiseSwap(head->next->next);
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    
    // Creating the linked list:
  	// 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    pairwiseSwap(head);
    
    printList(head);

    return 0;
}