// C++ program to merge a linked list into another at
// alternate positions

#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node *head){
    Node *curr = head;
    while (curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Function to merge two linked lists
vector<Node *> merge(Node *head1, Node *head2) {
  
    // Initialize pointers to traverse the two lists
    Node *curr1 = head1;
    Node *curr2 = head2;

    // Traverse both lists and merge them
    while (curr1 != NULL && curr2 != NULL){
      
        // Save the next nodes of the current 
      	// nodes in both lists
        Node *ptr1 = curr1->next;
        Node *ptr2 = curr2->next;

        // Insert the current node from the second list
        // after the current node from the first list
        curr2->next = curr1->next;
        curr1->next = curr2;

        // Update the pointers for the next iteration
        curr1 = ptr1;
        curr2 = ptr2;
    }

    return {head1, curr2};
}

int main(){
  
    // Creating first linked list 1->2->3
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);

    // crating second listed list 4->5->6->7->8
    Node *head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = new Node(6);
    head2->next->next->next = new Node(7);
    head2->next->next->next->next = new Node(8);

    // Store first and second head points in array
    vector<Node *> ar = merge(head1, head2);
    printList(ar[0]);
    printList(ar[1]);

    return 0;
}